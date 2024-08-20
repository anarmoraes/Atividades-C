#include<stdio.h>
int main(){
	float Fahrenheit, Celsius;
	printf("Digite a temperatura em graus Fahrenheit:\n", Fahrenheit);
	scanf("%f", &Fahrenheit);
	Celsius = (5.0/9.0)*(Fahrenheit-32);
	printf("A temperatura em graus Celsius corresponde a: %.2f", Celsius);
	
return 0;	
}
