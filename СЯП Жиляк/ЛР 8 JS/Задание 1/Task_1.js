let stroka = document.getElementsByTagName("p")[0];
stroka.onmouseover = function change_color() { //мышка наведена
    document.getElementsByTagName("p")[0].style.color = "blue";
}
stroka.onmouseout = function back_color() { //мышка отведена
    document.getElementsByTagName("p")[0].style.color = "black";
}