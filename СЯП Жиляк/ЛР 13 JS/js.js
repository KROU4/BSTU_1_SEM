//1задание
var numbers = [1, 2, 3, 4, 5, 6];
if (numbers.includes(+prompt("Введите число"))) {
  alert("Число есть");
} else {
  alert("Нет числа");
}

//2задание
var letters = [];
for (let i = 0; i < 7; i++) {
  let randomNumber = Math.random();
  letters.push(randomNumber);
}
letters.push(NaN);


document.write("2 задание: Проверка значения NaN " + "<br>");
document.write(letters.includes(NaN) + "<br>"); // true
document.write(letters.indexOf(NaN) + "<br>"); // -1
document.write("<br>");

//3е задание
var mas1 = [2, 3, 4, 5];
var mas2 = [1, 2, 3, 4];

a = +prompt("Введите число");

if (mas1.includes(a) === mas2.includes(a)) {
  alert("Числа совпадают");
} else {
  alert("Нет подходящих чисел");
}

//4е задание Инфиксный оператор
var x1 = Math.round(1234 ** 2 * (23 / 5) + 234);
var x2 = Math.round(((28 * 765 ** 2) / 5) * 43 ** 2);
var x3 = Math.round(3734 ** 6 - (434 ** 6 + 1024 ** 4) / 54);
var x4 = Math.round(6543 ** 35 - 965732);
var x5 = Math.round((1000 ** 10 + 100000 ** 10) / 10000);

document.write(x1 + "<br>");
document.write(x2 + "<br>");
document.write(x3 + "<br>");
document.write(x4 + "<br>");
document.write(x5 + "<br>");
