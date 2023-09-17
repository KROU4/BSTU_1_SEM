let text = document.getElementsByTagName("p")[0];
text.onclick = function increase_text() { //при наведении мыши увеличивается текст
    document.getElementsByTagName("p")[0].style.fontSize = "50pt";
}