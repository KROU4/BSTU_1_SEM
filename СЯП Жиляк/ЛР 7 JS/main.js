function fun1() {
  let form = document.querySelector("form"); //Метод Document querySelector() возвращает первый элемент в документе, соответствующий указанному селектору
  let faculty = form.querySelector("textarea").value; //value - извлекает или задает текст в поле ввода элемента textArea.
  let secondname = form.secondname.value; //возвращает элемент secondname формы
  let specialty = form.specialty.value;
  let rad = form.rad.value;
  let box = {};
  let a = 0;

  for (let i = 0; i < form.box.length; i++) {
    if (form.box[i].checked) {
      //нажат ли checkbox
      box[a] = form.box[i].value;
      a++;
    }
  }
  document.write(
    "<h3>" +
      faculty +
      "</h3>" +
      "Студент " +
      secondname +
      " специальность " +
      specialty +
      " курс " +
      rad +
      " должен сдавать следующие предметы:<br>"
  );
  let spis = document.createElement("ul");
  for (let i = 0; i < a; i++) {
    spis.appendChild(document.createElement("li")).innerHTML = box[i];
  }

  document.body.appendChild(spis);

  let secondform = document.createElement("form");
  let select = secondform.appendChild(document.createElement("select"));
  for (let i = 0; i < a; i++) {
    select.appendChild(document.createElement("option")).innerHTML = box[i];
  }
  document.body.appendChild(secondform);
}
