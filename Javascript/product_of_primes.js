function pofp(num){
	prime = [];
	for(let i = 2;i <= num + 1 ;i++){
		while(num%i == 0){
			num = num/i
			prime.push(i)
		}
	}
	console.log(prime.join("x"))
}
pofp(10)
pofp(53796)
