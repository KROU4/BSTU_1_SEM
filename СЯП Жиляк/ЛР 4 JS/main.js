//Первое задание
function Gruppa(num, speciality, amount) {
    //Свойства(номер, специальность, количество)
    this.num = num;
    this.speciality = speciality;
    this.amount = amount;

    //Метод (добавить в группу k студентов)
    this.add_stud = function add_stud(k) {
        this.amount += k;
        document.write('В группу №' + this.num + ' добавили ' + k + ' студента(ов).<br>');
    }
    //Отчисление студентов
    this.sub_stud = function sub_stud(k) {
        this.amount -= k;
        document.write('Из группы №' + this.num + ' отчислили ' + k + ' студента(ов).<br>')
    }

    this.col = function col(k) {
        this.amount = k;
        document.write('Количество студентов в группе №' + this.num + ' равно ' + this.amount + '<br>');
    }
}

let joke = 10;
let lokeas = {
    num: [joke],
    age
}

age = 10;

let isit1 = new Gruppa(1, 'ИСиТ', 30);
isit1.add_stud(15);
isit1.sub_stud(14);
isit1.col(1);
let isit2 = new Gruppa(2, 'ИСиТ', 30);
isit2.add_stud(18);
isit2.sub_stud(13);
isit2.col(5);
console.log(isit1);
console.log(isit2);
document.write('<br><br>');

//Второе задание
function Isitchiki(name, familia, oaip, syap, kyap, trpo, passport) {
    this.name = name;
    this.familia = familia;
    this.oaip = oaip;
    this.syap = syap;
    this.kyap = kyap;
    this.trpo = trpo;
    this.passport = passport;

    this.avg = function avg() {
        document.write('Количество сданных лаб у студента по имени ' + this.name + ' равено ' + (this.oaip + this.syap + this.kyap + this.trpo) + '<br>');
    }

    this.info = function info() {
        document.write('Иформация о студенте:<br>' + 'Фамилия: ' + this.familia + '<br>Имя: ' + this.name + '<br>Количество сданных лаб по ОАИП: ' + this.oaip + '<br>Количество сданных лаб по СЯП: ' + this.syap + '<br>Количество сданных лаб по КЯР: ' + this.kyap + '<br>Количество сданных лаб по ТРПО: ' + this.trpo + '<br>' + 'Наличие паспорта: ' + this.passport + '<br>');
    }
}

let stud1 = new Isitchiki('Дмитрий', 'Велютич', 11, 2, 3, 6, 'В наличии');
let stud2 = new Isitchiki('Владимир', 'Сацюк', 11, 1, 3, 5, 'В наличии');
let stud3 = new Isitchiki('Алексей', 'Авдей', 12, 4, 7, 6, 'В наличии');


stud1.info();
stud1.avg();
document.write('<br>');
stud2.info();
stud2.avg();
document.write('<br>');
stud3.info();
stud3.avg();
document.write('<br>');

const car = {
    model: function() {
        
    }
}


//Третье задание
let arr = [1, 2, 3, 4, 5, 6];
console.log(arr);
delete arr[3];
console.log(arr);

console.log(1 in arr);
console.log('add_stud' in Gruppa);
console.log('syap' in Isitchiki);

console.log(arr instanceof Array);
console.log(stud1 instanceof Object);
console.log(isit1 instanceof String);

function return5() {
    return 5;
}

console.log(typeof Gruppa);
console.log(typeof Gruppa.prototype.name);
console.log(typeof Gruppa.prototype.add_stud);
console.log(typeof Gruppa.prototype.sub_stud);
console.log(typeof isit1.add_stud);
console.log(typeof isit1.sub_stud);
console.log(typeof isit1);
console.log(typeof Isitchiki);
console.log(typeof Isitchiki.prototype.avg);
console.log(typeof Isitchiki.prototype.fio);
console.log(typeof Isitchiki.prototype.info);
console.log(typeof stud1);
console.log(typeof stud1.name);
console.log(typeof stud1.familia);
console.log(typeof stud1.oaip);
console.log(typeof stud1.syap);
console.log(typeof stud1.kyap);
console.log(typeof stud1.trpo);
console.log(typeof arr);
console.log(typeof return5);