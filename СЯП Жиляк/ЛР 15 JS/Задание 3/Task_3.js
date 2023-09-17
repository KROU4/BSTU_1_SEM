function reg(text) {
    text = text.replace(/\[(\/?)a(.*?)\]/sg, '<$1a$2>'); //заменяет [a] на <a>
    return text;
  }
  
  let char = "[a]";
  alert(reg(char));
