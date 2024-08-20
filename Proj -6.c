#include<stdio.h>
int main(){
	float fabrica, total, impostos, distribuidor;
	float dis = 28.0;
	float imp = 45.0;
	
	printf("Digite o custo de fabrica do carro:\n", fabrica);
	scanf("%f", &fabrica);
	
	distribuidor = dis/100*fabrica;
	impostos = imp/100*fabrica;
	total = fabrica + distribuidor + impostos;
	
	printf("O custo final do carro para o consumidor e %.f", total);	
	
return 0;	
}
