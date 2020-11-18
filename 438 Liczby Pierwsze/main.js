function isPrimaryNumber(number) {
	if(number < 3) {
		return number === 2 ? "TAK" : "NIE";
	}
 
	const sqrt = Math.ceil(Math.sqrt(number));
	for(let j=2; j<=sqrt; j++) {
		if(number % j === 0) {
			return "NIE";
		}
	}
	return "TAK";
}
 
(function () {
	let n = readline();
	n = isNaN(n) || n > 100000 ? 0 : n;
	for(let i=0; i<Number(n); i++) {
		const number = readline();
		if(isNaN(number)) {
			break;
		}
		const result = isPrimaryNumber(Number(number));
		console.log(result);
	}
})()