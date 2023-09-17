let reg = /first.second/s;
let result = reg.test('first\nsecond'); //Выведет true, т.к. у нас используется флаг s, который приравнивает точку (.) к разделителю строк (\n)
console.log(result);