let array = ["a", "b", "c", "d", "e"];
let mappedArray = array.map( element => element.padStart(5, '1')); //чтобы добавить 4 единицы перед элементом
mappedArray.push('0'.padStart(5, ' ')); //чтобы добавить 4 пробела перед нулем, и добавляется в конец массива
let arrayString = mappedArray.join(" "); //чтобы соединить каждый элемент массива с пробелом, создавая новую строку
console.log(arrayString);
