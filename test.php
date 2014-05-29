<?php
$ch = curl_init();
curl_setopt($ch, CURLOPT_URL, 'http://all.kharkov.ua/horoscope/hor_day/2014-05-22.html');
curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
$result = curl_exec($ch);

preg_match_all('|<tbody>(.*?)</tbody>|Uis',$result,$matches);
var_dump($matches);

curl_close($ch);

