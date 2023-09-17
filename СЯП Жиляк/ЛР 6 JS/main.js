var win1, win2;
function fun1() {
  win1 = window.open("", "1 сайт");
} // Все объекты, включая переменные и функции, хранятся в объекте window.
function fun2() {
  win2 = window.open("", "2 сайт");
}
function fun3() {
  win1.close(); //метод .close() закрывает текущее окно или окно, которое было открыто с помощью функции
}
function fun4() {
  win2.close();
}
function fun5() {
  win1.document.write(win1.window.name + "<br> Работает </br>"); //name - метод обьекта window - получает/задает имя контекста просмотра окна.
}
function fun6() {
  win2.document.write(win2.window.name + "<br> Работает </br>");
}
