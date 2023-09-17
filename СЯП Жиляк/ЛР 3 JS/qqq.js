function f1() {
    let x1 = (6 - Math.pow(Math.PI, 2) + 3 * Math.exp(8));
    let x2 = (2 * Math.cos(4) + Math.cos(12) + 8 - Math.exp(3));
    let x3 = (3 * Math.sin(9) + Math.log(5) + (x1 + x2));
    let x4 = (2 * Math.tan(5) + 6 * (-Math.PI) + Math.sqrt(12));
    let array = [x1, x2, x3, x4];  //Массив представляет собой упорядоченный набор данных.
    console.log(" Максимальный элемент массива: " + (Math.max(...array)) + "\nИндекс максимального элемента массива: "
        + array.indexOf(Math.max(...array)));
    console.log(" Минисимальный элемент массива: " + (Math.min(...array)) + "\nИндекс миинмального элемента массива: "
        + array.indexOf(Math.min(...array)));  //indexOf() возвращает первый индекс, по которому данный элемент может быть найден в массиве
}

function f3() {
    let fio = Array.of("Велютич","Дмитрий","Игоревич");
    console.log(fio);
    let bstu = Array.from("БГТУ");
    console.log(bstu);
}

function f4() {
    let array = ["pow", "pop", "push", "shift", "round", "floor", "sline", "sort"]; // исходный массив
    let arrayOfMathMethods = []; // создаем пустой массив
    let arrayOfArrayMethods = []; // создаем пустой массив
    for (let i = 0; i < array.length; i++) { // цикл for равный длине массива array
        if (Math.hasOwnProperty(array[i])) //если у обьекта Math есть свойство из массива array то оно переносится в массив arrayOfMathMethods
            arrayOfMathMethods.push(array[i]); //добавление нужного метода в соответсвующий массив
        else if (Array.prototype.hasOwnProperty (array[i])) //если у обьекта Array есть свойство из массива array то оно переносится в массив arrayOfArrayMethods
            arrayOfArrayMethods.push(array[i]); //добавление нужного метода в соответсвующий массив
    }
    
    arrayOfArrayMethods.push("from"); //добавляет в нужный массив по нужному методу соответсвующего обьекта
    arrayOfMathMethods.push("asin");
    
    console.log("Исходный массив: " + array);
    console.log("Массив с методами Array: " + arrayOfArrayMethods);
    console.log("Массив с методами объекта Math: " + arrayOfMathMethods);
    console.log("Длина массива с методами Array: " + arrayOfArrayMethods.length);
    console.log("Длина массива с методами объекта Math: " + arrayOfArrayMethods.length);
}

function f5() {
    let z5 = String("Велютич Дмитрий Игоревич");
    console.log (z5);
    console.log (z5.length);
    let upper = (z5.toUpperCase());
    let lower = (z5.toLowerCase());
    console.log (upper);
    console.log (lower);
    let both = (upper.concat(" ", lower))
    console.log (both);
    let fio = (z5.replace("Велютич Дмитрий Игоревич", "ВДИ"));
    console.log (fio);
}

function f6() {
    let date = new Date();
    let year = date.getFullYear();
    let mon = date.getMonth();
    let month;
    switch (mon) {
        case 0:
            month = ("Январь")
            break;

        case 1:
            month = ("Февраль")
            break;

        case 2:
            month = ("Март")
            break;

        case 3:
            month = ("Апрель")
            break;

        case 4:
            month = ("Май")
            break;

        case 5:
            month = ("Июнь")
            break;

        case 6:
            month = ("Июль")
            break;

        case 7:
            month = ("Август")
            break;

        case 8:
            month = ("Сентябрь")
            break;

        case 9:
            month = ("Октябрь")
            break;

        case 10:
            month = ("Ноябрь")
            break;

        case 11:
            month = ("Декабрь")
            break;
    }
    let day = date.getDate();
    let hour = date.getHours();
    let minutes = date.getMinutes();
    let seconds = date.getSeconds();

    document.write('<table border="1" cellspacing="1" align="center" text-align="center">');
    document.write("<tr>");
    document.write("<td>" + "Год");
    document.write("<td>" + year);
    document.write("</tr>");

    document.write("<tr>");
    document.write("<td>" + "Месяц");
    document.write("<td>" + month);
    document.write("</tr>");

    document.write("<tr>");
    document.write("<td>" + "День");
    document.write("<td>" + day);
    document.write("</tr>");

    document.write("<tr>");
    document.write("<td>" + "Час");
    document.write("<td>" + hour);
    document.write("</tr>");

    document.write("<tr>");
    document.write("<td>" + "Минута");
    document.write("<td>" + minutes);
    document.write("</tr>");

    document.write("<tr>");
    document.write("<td>" + "Секунда");
    document.write("<td>" + seconds);
    document.write("</tr>");
    document.write("</tr>");
    document.write("</table>");
    // многомерный массив, фор ин, фор оф и методы перебора массива
}