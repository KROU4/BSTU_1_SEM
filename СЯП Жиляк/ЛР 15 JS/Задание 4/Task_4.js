const regexp = /(?<firstName>.+), (?<lastName>.+)/g /*являются регулярным выражением, которое ищет имя и фамилию в строке source. 
Регулярное выражение ищет что-то вида "имя, фамилия", и использует именованные группы, чтобы отделить имя и фамилию.*/
const source = "firstName, lastName";
function change(text) { //принимает текстовую строку и использует метод exec, чтобы извлечь имя и фамилию из регулярного выражения
    text = regexp.exec(text);
    return `${text.groups["lastName"]}, ${text.groups["firstName"]}` //возвращает новую строку с переставленными местами именем и фамилией
}
console.log(source.replace(regexp, change)); //метод replace, который принимает два аргумента - регулярное выражение и функцию для замены