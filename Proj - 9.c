#include<stdio.h>
int main(){
	float n1, n2, n3, mf;
	
	printf("Digite sua primeira nota:\n", n1);
	scanf("%f", &n1);
	printf("Digite sua segunda nota:\n",n2);
	scanf("%f", &n2);
	printf("Digite sua terceira nota:\n", n3);
	scanf("%f", &n3);
	
	mf = (2*n1+3*n2+5*n3)/10;
	
	printf("Sua media final e: %.2f\n", mf);
	
return 0;	
}
