function gcd(a, b) {
  return a === 0 ? b : gcd(b % a, a);
}

let n = readline();
n = isNaN(n) || n < 1 || n > 20 ? 0 : Number(n);

for (let i = 0; i < n; i++) {
  const numbers = readline().trim().split(" ");
  const a = numbers[0];
  const b = numbers[1];
  if (a >= 10 && a <= 30 && b >= 10 && b <= 30) {
    console.log((a * b) / gcd(a, b));
  }
}
