var rat = document.getElementById("rat");
var text = document.getElementById("text");
rat.onmousedown = function () { //абсолютное позиционирование и привящка координатов rat к курсору мыши при нажатии мыши
  rat.style.position = "absolute";
  document.onmousemove = function (e) {
    rat.style.left = e.clientX - rat.offsetWidth / 2 + "px";
    rat.style.top = e.clientY - rat.offsetHeight / 2 + "px";
  };

    rat.onmouseup = function () { 
    document.onmousemove = null; //прекращение перетаскивания элемента
    rat.ondragstart = function () {  //блокирует повторное перетаскивание элемента, пока функция не будет выполнена заново.
      return false;
    };
  };
};

text.onmousedown = function () { //документация такая же, как и к картинке
  text.style.position = "absolute";
  document.onmousemove = function (e) { 
    text.style.left = e.clientX - text.offsetWidth / 2 + "px";
    text.style.top = e.clientY - text.offsetHeight / 2 + "px";
  };
  text.onmouseup = function () {
    document.onmousemove = null; 
    text.ondragstart = function () {
      return false;
    };
  };
};

citl.addEventListener("click", fun1); //добавляет обработчик событий
function fun1() {
  let step = -1;
  let position = 0;

  setInterval(function () { 
    if (position === screen.width - citl.width || position === 0) { //картинка перемещается в сторону каждую 1 милисек. когда достигается конца экрана, то движется обратно
      step = -step;
    }
    position += step;
    citl.style.left = position + "px"; //при достижении правого конца экрана, картинка двигается вправо на минусовые координаты.
  }, 1);
}


citk.addEventListener("click", fun2); //добавляет обработчик событий
function fun2() {
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
}