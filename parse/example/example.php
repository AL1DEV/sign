<?php
header("Content-type: text/html; charset=utf-8");

// example of how to use basic selector to retrieve HTML contents
include('../simple_html_dom.php');
$date = date('Y-m-d');
// get DOM from URL or file
$html = file_get_html('http://all.kharkov.ua/horoscope/hor_day/'.$date.'html');

$result='';
// Find all article blocks
foreach($html->find('.zodiac_signs') as $article) {
    $result .= $article->plaintext;
}
$replace = array (
    "Общий","Овен","Телец","Близнецы","Рак","Лев","Дева","Весы","Скорпион","Стрелец","Козерог","Водолей","Рыбы",
    "(21 марта - 20 апреля)","(21 апреля - 21 мая)","(22 мая - 21 июня)"," (22 июня - 23 июля)","(24 июля - 23 августа)",
    "(24 августа - 23 сентября)","(24 сентября - 23 октября)","(24 октября - 22 ноября)","(23 ноября - 21 декабря)",
    "(22 декабря - 20 января)","(21 января - 19 февраля)","(20 февраля - 20 марта)","(Для всех знаков зодиака)"," Гороскопы от oculus.ru",
    "Александр Тамилин"," Ирина Звягина"
    );

$result = str_replace($replace,'',$result);
$var = explode("&nbsp;",$result);

unset($var[0]);

echo '<pre>';
print_r($var);
echo '</pre>';

?>