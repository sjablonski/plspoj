function getUnitsDigit(base, power) {
  const b = base % 10;
  const n = power % 4;
  if (b === 0 || b === 1 || b === 5 || b === 6) {
    return b;
  }
  for (let x = 0; x < 10; x++) {
    for (let y = 0; y < 4; y++) {
      if (b === x && n === y) {
        if ((b & 1) === 0 && y === 0) {
          return 6;
        } else if ((b & 1) === 1 && y === 0) {
          return 1;
        } else {
          return Math.pow(x, y) % 10;
        }
      }
    }
  }
}

let n = readline();
n = isNaN(n) || n < 0 || n > 10 ? 0 : Number(n);

for (let i = 0; i < n; i++) {
  let line = readline();
  if (line) {
    line = line.split(" ");
    const a = Number(line[0]);
    const b = Number(line[1]);
    if (!!a && a <= 1000000000 && !!b && b <= 1000000000) {
      console.log(getUnitsDigit(a, b));
    }
  }
}
