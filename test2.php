<?php
$array_date=array('2014-05-21');
$link = mysql_connect('localhost', 'root', 'root');
mysql_select_db('drupalcopy');
$query = mysql_query('SELECT tn.name , d.field_date_value FROM node AS n INNER JOIN field_data_field_date AS d ON n.nid=d.entity_id INNER JOIN field_data_field_sign AS t ON n.nid=t.entity_id INNER JOIN taxonomy_term_data AS tn ON t.field_sign_tid=tn.tid WHERE n.type="horoscope"');
while ($row = mysql_fetch_array($query)) {
    var_dump($row);
}


?>