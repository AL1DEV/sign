<?php
header("Content-type: text/html; charset=utf-8");

// example of how to use basic selector to retrieve HTML contents
include('../simple_html_dom.php');

$date = dateInterval();

echo '<pre>';
 print_r(parse($date));
echo '</pre>';

function dateInterval()
{
    $start ='2014-01-01';
    $end = date('Y-m-d');
    $start = strtotime($start);
    $end   = empty($end) ? time() : strtotime($end);

    for($d = $start; $d <= $end ; $d = strtotime('tomorrow', $d))
        $interval[] = date('Y-m-d', $d);

    return $interval;
}


function parse($date){
    foreach ($date as $dat){
        $html = file_get_html('http://all.kharkov.ua/horoscope/hor_day/'.$dat.'html');
        foreach($html->find('.sign_name') as $sign_name) {
            $title = $sign_name->plaintext;
            $text  = $sign_name->parent()->parent()->next_sibling()->plaintext;
            $result[] = array($title,$text,$dat);
        }
    }
    return $result;
}

?>