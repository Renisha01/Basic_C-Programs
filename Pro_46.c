//WAP to Convert a Decimal to Octal and Vice versa.  

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int deciToInt(double d){
	return floor(d);
}

void convertDecimalToOctal(double n){
	int m , d , rem , size = 0;
	m = (int)n;
	n = n - m;
	int *arr1;
	arr1 = (int*)malloc(1 * (sizeof(int)));
	//for int number 
	while(m!=0){
		rem = m % 8;
		size++;
		arr1 = (int*)realloc(arr1 , size * (sizeof(int)));
		arr1[size-1] = rem;
		m = m / 8;
	}
	//for decimal point
	int arr2[4] , ip , i;
	double b ; 
	for( i = 0 ; i < 4 ; i++){
		b = n * 8 ;
		ip = deciToInt(b);
		arr2[i] = ip;
		n = b - ip;
	}
	//print ans
	//print int part
	for(i = size-1 ; i >= 0 ; i--){
		printf("%d",arr1[i]);
	}
	printf(".");
	//for decimal part
	for(i = 0 ; i < 4 ; i++ ){
		printf("%d",arr2[i]);
	}	
}

void convertOctalToDecimal(double n){
	int m , d , size = 0 , count = 0 , i = 0, digit;
	m = deciToInt(n);
	n = n - m;
	d = m;
	double ans = 0;
	//for int part
	while(m!=0){
		digit = m % 10;
		ans += digit * pow(8,i);
		i++;
		m = m / 10;
	}
	double a;
	int b , j = -1;
	//for decimal part
	while(n!=0){
		a = n * 10;
		b = deciToInt(a);
		ans += b * pow(8,j);
		j--;
		n = a - b;
	}
	printf("%.4 lf",ans); 
	
}
int main(){
	int m;
	printf("Enter a 1 for convert Decimal to Octal \n Enter a 2 for convert Octal to Decimal \n: ");
	scanf("%d",&m);
	double n;
	printf("Enter a number : ");
	scanf("%lf",&n);
	if(m==1){
		convertDecimalToOctal(n);
	}
	else{
		convertOctalToDecimal(n);
	}
}
