fun1();
fun2();
fun3();
function fun1() {
  let a = +prompt("Введите номер ключа : ");
  let map = new Map();
  map.set("1", "+375444948232");
  map.set("2", "+375444948232");
  map.set("3", "+375444948232");
  map.set("4", "+375444948232");
  map.set("5", "+375444948232");
  switch (a) {
    case 1:
      alert(map.get("1"));
      break;
    case 2:
      alert(map.get("2"));
      break;
    case 3:
      alert(map.get("3"));
      break;
    case 4:
      alert(map.get("4"));
      break;
    case 5:
      alert(map.get("5"));
      break;
  }
}
function fun2() {
  let set = new Set([2, 4]);
  set.add(1);
  set.add(3);
  set.add(5);
  alert("Кол-во элементов = " + set.size);
  console.log(set.has(1));
  console.log(set.has(3));
  console.log(set.has(5));
  console.log(typeof set.has(1)); //set.has(1) имеет в себе 1, поэтому возвращается true, соответсвенно boolean
}

var proto = {
  firstname: "Dmitry ",
  secName: "Velutich ",
  thirdName: "Igorevich ",
  show: function () {
    document.write(
      "<br>" + "Это " + this.firstname + this.secName + this.thirdName
    );
  },
};

proto.show();
var proto2 = Object.create(proto);
proto2.firstname = "Vladimir ";
proto2.secName = "Satsuk ";
proto.thirdName = "Vasil'evich ";
proto2.show();

function fun3(name) {
  name = typeof name !== "undefined" ? name: "Аноним"; //Данная строка означает, что переменной name присваивается значение, переданное в качестве аргумента. Если аргумент не передан, переменной присваивается значение "Аноним".
  alert("Здравствуйте, " + name);
}
fun3("Дмитрий");



const buttons = document.querySelectorAll("button");

for (let button of buttons) {
  const counter = (function () {
    let count = 0;
    return () => {
      return count++;
    };
  })();
  button.addEventListener("click", function () { /*Эта функция может получить доступ к переменной count, 
  которая объявлена внутри функции counter, даже после того, как функция counter была выполнена. 
  Это и есть замыкание.*/
    this.textContent = "Нажатие " + counter();
  });
}