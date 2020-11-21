function gcd(a, b) {
  return a === 0 ? b : gcd(b % a, a);
}

let n = readline();
n = isNaN(n) ? 0 : Number(n);

for (let i = 0; i < n; i++) {
  const numbers = readline().trim().split(" ");
  const a = numbers[0];
  const b = numbers[1];
  if (a >= 0 && a <= 1000000 && b >= 0 && b <= 1000000) {
    console.log(gcd(a, b));
  }
}
