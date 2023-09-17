function reg(text) {
    text = text.replace(/\[u\](\W*)\[\/u\]/gim, `<u>$1</u>`); //Заменяет [u] на <u>
  
    return text;
  }
  
  let char = "[u]KROU4 \n is the Best[/u]";
  alert(reg(char));