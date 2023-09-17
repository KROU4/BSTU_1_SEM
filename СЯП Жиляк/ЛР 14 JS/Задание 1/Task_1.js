const food = {fruit: "Банан", vegetable: "Огурец", meet: "Говядина"};

const vals = Object.keys(food).map(key => food[key]); /*чтобы получить массив ключей из объекта food, и используется map()
 чтобы получить массив значений из каждого ключа. Затем выводится этот массив значений с помощью alert()*/
alert(vals);

const values = Object.values(food); /*чтобы получить массив значений из объекта food,
 и этот массив значений также выводится с помощью alert()*/
alert(values);