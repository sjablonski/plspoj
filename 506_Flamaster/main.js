let n = readline();
n = isNaN(n) || n < 1 || n > 50 ? 0 : Number(n);

for (let i = 0; i < n; i++) {
  const text = readline().trim();
  if (text) {
    let result = "";
    for (let i = 0; i < text.length; i++) {
      let counter = 1;
      while (i < text.length - 1 && text[i] === text[i + 1]) {
        counter++;
        i++;
      }
      if (counter === 2) {
        result += text[i].repeat(2);
      } else if (counter > 2) {
        result += text[i] + counter;
      } else {
        result += text[i];
      }
    }
    console.log(result);
  }
}
