let n = readline();
n = isNaN(n) || n < 1 || n > 30 ? 0 : Number(n);

for (let i = 0; i < n; i++) {
  const nFactorial = readline();
  let factorial = 1;
  let units = 0;
  let tens = 0;
  if (nFactorial > 0 || nFactorial < 1000000000) {
    if (nFactorial < 10) {
      for (let i = 2; i <= nFactorial; i++) {
        factorial *= i;
      }
      units = factorial % 10;
      tens = ((factorial % 100) - (factorial % 10)) / 10;
    }
    console.log(tens, units);
  }
}
