//1задание - цвет слова в тексте при наведении курсора мыши
$(document).ready(function () {
  $("#span1").mouseover(function () {
    span1.style.color = "orange";
  }); //наведение курсора мыши на элемент - событие onmouseover

  //2задание - размер шрифта слова щелчком мыши
  $("#span2").click(function () {
    span2.style.fontSize = "25px";
  });

  //3задание - замены картинки на другую при щелчке мышью
  $("#img").click(function () {
    img.src = "1cit.jpg";
  });

  //4задание - заменяющую текст изображением
  $("#span3").click(function () {
    span3.innerHTML = '<img src="2cit.jpg" alt="image"/>';
  });

  //5задание - эффекты увеличения размера рисунка
  $("#img2").mouseover(function () {
    img2.style.width = "250px";
  });

  $("#img2").mouseout(function () {
    img2.style.width = "200px";
  }); //выведение курсора мыши за пределы границ элемента - событие onmouseout

  //6задание - цветную рамку произвольного стиля вокруг абзаца при двойном щелчке
  $("#span4").dblclick(function () {
    span4.style.border = "solid red 2px";
    span4.style.borderTop = "solid green 2px";
    span4.style.borderBottom = "solid blue 2px";
  });
}); //ondblclick - двойной щелчок
