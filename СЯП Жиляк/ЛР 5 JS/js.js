//1zadanie - Вывести на экран все тэги и их номера в коллекции all своей первой web-страницы.

console.log(document.all); //возвращает все элементы документа, доступные по порядку и по идентификатору (как обычный объект)
//2zadanie - Вывести все дочерние элементы узла document.body
console.log(document.body.childNodes); // дочерние элементы

//3 zadanie - Вывести в окно содержимое первого элемента span

//1th - используя для доступа к элементу коллекцию all
console.log(document.getElementsByTagName("span")[0].textContent); //Метод интерфейса Document возвращает HTMLCollection элементов с заданным именем тега
// textContent Позволяет задавать или получать текстовое содержимое элемента и его потомков
// 2th
console.log(document.querySelectorAll("span")[0]); // используя частную коллекцию (span)

// 3th
console.log(document.getElementById("span1")); // используя идентификатор элемента.

//4ое задание
let table = document.getElementsByTagName("table")[0];
let avg = 0;
for (let i = 1; i < table.rows[1].cells.length; i++) {
  avg += Number(table.rows[1].cells[i].innerHTML);
}

document.getElementsByTagName("span")[0].innerHTML += avg / 2;
//innerHTML - свойтво, хранящее в себе html содержимое элемента в виде строки
