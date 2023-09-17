$(document).ready(function () {
  $("#rat").mousedown(function () {
    rat.style.position = "absolute";
    document.onmousemove = function (e) {
      rat.style.left = e.clientX - rat.offsetWidth / 2 + "px";
      rat.style.top = e.clientY - rat.offsetHeight / 2 + "px";
    };
    $("#rat").mouseup(function () {
      document.onmousemove = null;
    });
  });

  $("#text").mousedown(function () {
    text.style.position = "absolute";
    document.onmousemove = function (e) {
      text.style.left = e.clientX - text.offsetWidth / 2 + "px";
      text.style.top = e.clientY - text.offsetHeight / 2 + "px";
    };
    $("#text").mouseup(function () {
      document.onmousemove = null;
    });
  });

  $("#citl").click(function () {
    let step = -1;
    let position = 0;

    setInterval(function () {
      if (position == screen.width - citl.width || position == 0) {
        step = -step;
      }
      position += step;
      citl.style.left = position + "px";
    }, 1);
  });

  $("#citk").click(function () {
    let count = 0;
    let startX = citk.style.left; //координаты исходной позиции картинки
    let startY = citk.style.top; //координаты исходной позиции картинки
    let corner = 0;
  
    setInterval(krug, 5); //функция круг, обновляемая каждые 5 милисек.
  
    function krug() { //вычисление траектории круга
      let radius = 200;
      let centerX = screen.width / 2 - citk.width / 2;;
      let centerY = screen.height / 2 - citk.height / 2;;
  
      corner += (2 * Math.PI) / 360;
  
      citk.style.left = centerX + radius * Math.sin(corner) + "px"; //следование картинки по кругу
      citk.style.top = centerY + radius * Math.cos(corner) + "px";
  
      count++;
  
      if (count == 3) {
        citk.style.left = startX; //startX - координаты исходной позиции картинки
        citk.style.top = startY; //startY - координаты исходной позиции картинки
        clearInterval(krug);
      }
    }
  });
});
