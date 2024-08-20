#include<stdio.h>
int main(){
	int soma, anos, meses, dias;
	printf("Digite sua idade em anos, meses e dias:\n", anos, meses, dias);
	scanf("%d %d %d", &anos, &meses, &dias);
	soma= anos*365 + meses*30 + dias;
	printf("Sua idade em dias e: %d", soma);
	
	
return 0;
}
