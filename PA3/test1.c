void main(){
    int a[10], i;
    int a;
	float f, g, d;
	a[0] = 2;
    
	for(i=1;i<10;i++){
		for(a[i] = a[i-1]+1;isPrime(a[i]) == 0;a[i]++);
	}

    do{
		r = p % i++;

		if(r == 3){
			a = a+3;
			break;
		}
	}while(i<p && r > 0);

	switch(score/10){
		case 10 :
			a = 10;
			break;
		case 9 :
			a = 9;
			break;
		case 8 :
			a = 8;
			break;
		case 7 :
			a = 7;
			break;
		case 6 :
			a = 6;
			break;
		default :
			a = 0;
	}
}