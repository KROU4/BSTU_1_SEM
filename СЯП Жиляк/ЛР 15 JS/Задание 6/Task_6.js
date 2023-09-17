let Object1 = {
    property1: "Мышка",
    property2: "Клавиатура",
    property3: "Монитор",
    property4: "Наушники",
}
let deleted = function deleteProperty({property1, ...rest}){ /*параметрах передается объект Object1, из которого извлекается первое свойство. 
Все остальные свойства сохраняются в переменной rest.*/
    return rest;
}
Object1 = deleted(Object1); //переменная возвращается, и она перезаписывает объект Object1.
Object1 = {...Object1, firstName: "Дмитрий", secondName: "Велютич"} //добавление свойств имени и фамилии с соответсвующими значениями
for(let key in Object1){ //цикл для вывода на экран всех остальных свойств из объекта
    console.log(key, Object1[key]); 
}