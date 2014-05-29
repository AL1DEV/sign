<?php
class my_parser{

    public $title;
    public $data;
    public $text;

    public static function my_parser_interval_data(){
        $start ='2014-05-28';
        $end = date('Y-m-d');
        $start = strtotime($start);
        $end   = empty($end) ? time() : strtotime($end);

        for($d = $start; $d <= $end ; $d = strtotime('tomorrow', $d))
            $interval[] = date('Y-m-d', $d);

        return $interval;
    }

    public static function my_parser_init_bd()
    {
        $res= array();
        $dates = my_parser::my_parser_interval_data();

        $query =db_select('taxonomy_term_data','t')
            ->fields('t',array('name'))
            ->condition('t.vid',2);
        $signs = $query->execute()->fetchCol();

        $query=db_select('node','n')
            ->fields('tn',array('name'))
            ->fields('d',array('field_date_value'))
            ->condition('n.type','horoscope');
        $query->innerJoin('field_data_field_date','d','n.nid=d.entity_id');
        $query->innerJoin('field_data_field_sign','t','n.nid=t.entity_id');
        $query->innerJoin('taxonomy_term_data','tn','t.field_sign_tid=tn.tid');
        $result = $query->execute()->fetchAll();
        watchdog("получяю", '<pre>' . print_r($result, true) . '</pre>');

        foreach ($result as $record) {
            $record->name;
            $date_unix = (date("Y-m-d", strtotime($record->field_date_value)));
            $res[$date_unix][] = $record->name;
        }

        foreach ($dates as $date) {
            if (isset($res[$date])) {
                if(count($res[$date])<12){
                    $val = array_diff($signs,$res[$date]);
                    $array[$date]= $val;
                }
            }
            else{
                foreach($signs as $sign){
                    $array[$date][]= $sign;
                }
            }
        }

        return $array;
    }

    public function my_parser_name_transcript($title_node){
        switch($title_node){
            case 'Овен':
                $title_node = 'Овна';
                break;
            case 'Телец':
                $title_node = 'Тельца';
                break;
            case 'Близнецы':
                $title_node = 'Близнецов';
                break;
            case 'Рак':
                $title_node = 'Рака';
                break;
            case 'Лев':
                $title_node = 'Льва';
                break;
            case 'Дева':
                $title_node = 'Девы';
                break;
            case 'Весы':
                $title_node = 'Весов';
                break;
            case 'Скорпион':
                $title_node = 'Скорпиона';
                break;
            case 'Стрелец':
                $title_node = 'Стрельца';
                break;
            case 'Козерог':
                $title_node = 'Козерога';
                break;
            case 'Водолей':
                $title_node = 'Водолея';
                break;
            case 'Рыбы':
                $title_node = 'Рыб';
                break;
        }
        return $title_node;
    }

    public function my_parser_node_save($title,$data,$text){
        $node = new stdClass();
        $node->type = "horoscope";
        $title_to_bd = $this->my_parser_name_transcript($title);
        $node->title= t('Гороскоп для '."$title_to_bd".' на '."$data[time]".' ');
        $node->language = LANGUAGE_NONE;
        $node->uid = 1;
        $node->field_date[$node->language][] = array(
            'value'=>$data['time']
        );
        $node->field_description[$node->language][] = array(
            'value' => $text
        );
        $taxonomy_id = db_select('taxonomy_term_data','t')
            ->fields('t',array('tid'))
            ->condition('name',$title)
            ->execute()
            ->fetchAssoc();
        $node->field_sign[$node->language][] = array(
            'tid'=> $taxonomy_id['tid']
        );
        node_save($node);
    }
}
