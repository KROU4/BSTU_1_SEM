let newObject = {};
Object.defineProperties(newObject, {
  prop1: {
    writable: false, //свойство "writable" является дескриптором свойства, который используется для определения того, может ли свойство быть переназначено или нет.
    value: "MotoSpeed",
  },
  prop2: {
    writable: true,
    value: "CK108",
  },
});

for (let key of Object.getOwnPropertyNames(newObject)) { //записывает значение каждого свойства в консоль.
  console.log(newObject[key]);
}
