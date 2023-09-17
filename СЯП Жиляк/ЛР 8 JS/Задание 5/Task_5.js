let picture = document.getElementsByTagName("img")[0];
picture.onmouseover = function increase_picrure() { //при наведении мыши увеличивает до 600х600
    document.getElementsByTagName("img")[0].style.width="600px";
    document.getElementsByTagName("img")[0].style.height="600px";
}
picture.onmouseout = function decrease_picture() { //при уводке мыши возвращает до 300х300
    document.getElementsByTagName("img")[0].style.width="300px";
    document.getElementsByTagName("img")[0].style.height="300px";
}