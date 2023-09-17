document.write("<table>");

document.write("<tr>");
document.write("<td>Свойство</td>");
document.write("<td>Значение</td>");

document.write("<tr>");
document.write("<td>Информация о браузере</td>");
document.write("<td>" + navigator.userAgent + "</td>"); //св userAgent можно вывести на страницу информацию о браузере пользователя

document.write("<tr>");
document.write("<td>Версия браузера</td>");
document.write("<td>" + navigator.appVersion + "</td>"); //св appVersion можно узнать версию браузера

document.write("<tr>");
document.write("<td>Название браузера</td>");
document.write("<td>" + navigator.appName + "</td>"); //св appName – название браузера
//Объект Navigator позволяет определить, какой браузер использует пользователь
document.write("<tr>");
document.write("<td>Кодовое название</td>");
document.write("<td>" + navigator.appCodeName + "</td>"); //св appCodeName – кодовое название браузера

document.write("<tr>");
document.write("<td>ОС пользователя</td>");
document.write("<td>" + navigator.platform + "</td>"); //св platform – ОС, которую использует пользователь

document.write("<tr>");
document.write("<td>Поддержка JAVA</td>");
document.write("<td>" + navigator.javaEnabled() + "</td>"); //Метод javaEnabled() - проверить, включена ли поддержка Java в браузере пользователя

document.write("<tr>");
document.write("<td>Ширина и высота </td>");
document.write("<td>" + screen.width + " " + screen.height + "</td>");
//Объект Screen содержит информацию об экране пользователя
document.write("<tr>");
document.write("<td>Глубина цвета</td>");
document.write("<td>" + screen.colorDepth + "</td>"); //св colorDepth можно узнать глубину цвета(измеряется в битах на пиксель)

document.write("<tr>");
document.write("<td>Количество посещенных URL</td>");
document.write("<td>" + history.length + "</td>"); //св length позволяет узнать количество посещенных URL, хранящихся в списке
//Объект History содержит список URL, которые были посещены в данном окне браузера
document.write("<tr>");
document.write("<td>URL текущего документа</td>");
document.write("<td>" + location.href + "</td>"); //Св href хранит URL текущего документа целиком

document.write("<tr>");
document.write("<td>Путь к документу </td>");
document.write("<td>" + location.pathname + "</td>"); // св pathnam позволяет узнать путь к загруженному документу
//Объект Location позволяет узнать информацию о URL текущегодокумента
document.write("<tr>");
document.write("<td>Имя домена</td>");
document.write("<td>" + location.host + "</td>"); //Св host содержит имя домена загруженного документа
