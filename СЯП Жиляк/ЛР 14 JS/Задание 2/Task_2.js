let numbers = [1, 22, 333, 4444, 55555, 666666, 7777777];
let numbersString = "До: <br>" + numbers.join("<br>");
document.body.innerHTML += numbersString;

numbers = numbers.map(function(num) { //для преобразования массива чисел в массив строк.
  return num.toString().padStart(15, "0").padEnd(15, "0"); //преобразует число в строку и добавляет нули в начало и конец, чтобы длина строки достигала 15
});
numbersString = "<br>После: <br>" + numbers.join("<br>"); //чтобы объединить элементы массива в одну строку.
document.body.innerHTML += numbersString;
