$(document).ready(function () {
  document.getElementById("nav").onmouseover = function (e) {
    let target = e.target; //отслеживает нахождение мыши внутри блока
    if (target.className == "menu-item") {
      //отслеживаем клик
      let s = target.getElementsByClassName("submenu");
      closeMenu();
      s[0].style.display = "block"; //массив, содержащий ложное меню
    }
  };
  document.onmouseover = function (e) {
    let target = e.target;
    console.log(e.target);
    if (target.className != "menu-item" && target.className != "submenu") {
      closeMenu();
    }
  };
  function closeMenu() {
    //получение всех элементов подменю в блоке nav, присваивание
    //display:none
    //var menu = document.getElementById('nav');
    let subm = document.getElementsByClassName("submenu");
    for (let i = 0; i < subm.length; i++) {
      subm[i].style.display = "none";
    }
  }
});
