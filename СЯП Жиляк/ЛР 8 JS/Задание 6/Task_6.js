let text = document.getElementsByTagName("p")[0];
text.ondblclick = function add_border() { //при даблклике появляется граница
    document.getElementsByTagName("p")[0].style.border = "10px solid red";
}