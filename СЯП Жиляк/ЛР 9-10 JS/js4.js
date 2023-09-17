let x1 = 0,
  y1 = 0,
  x2 = -10,
  y2 = 0,
  x3 = -10,
  y3 = 0,
  x4 = 0,
  y4 = 0,
  col;

function fun2() {
  let radl = document.getElementsByName("rad");
  col = color.value;
  for (let i = 0; i < radl.length; i++) {
    if (radl[0].checked) {
      setInterval(fun4, 1); // Метод setInterval() возвращает некоторое целое число – идентификатор временного интервала,
      // который может быть использован в дальнейшем для прекращения процесса
    }
    if (radl[1].checked) {
      setInterval(fun5, 1); 
    }
    if (radl[2].checked) {
      setInterval(fun1, 1); 
    }
    if (radl[3].checked) {
      setInterval(fun3, 1);
    }
  }
}

function fun1() {
  let elem = document.createElement("div");
  elem.style.backgroundColor = col;
  elem.style.top = y1 * 30 + 300 + "px";
  elem.style.left = x1 * 30 + "px";
  document.body.appendChild(elem);
  x1 += 0.013;
  y1 = Math.sin(x1);
}

function fun3() {
  let elem = document.createElement("div");
  elem.style.backgroundColor = col;
  elem.style.top = y2 * 30 + 300 + "px";
  elem.style.left = x2 * 30 + "px";
  document.body.appendChild(elem);
  x2 += 0.013;
  y2 = Math.cos(x2);
}

function fun4() {
  let elem = document.createElement("div");
  elem.style.backgroundColor = col;
  elem.style.top = y3 * 30 + 50 + "px";
  elem.style.left = x3 * 30 + 200 + "px";
  document.body.appendChild(elem);
  x3 += 0.013;
  y3 = Math.pow(x3, 2);
}

function fun5() {
  let elem = document.createElement("div");
  elem.style.backgroundColor = col;
  elem.style.top = y4 * 30 + 100 + "px";
  elem.style.left = x4 * 30 + 150 + "px";
  document.body.appendChild(elem);
  x4 += 0.013;
  y4 = Math.pow(x4, 3);
}