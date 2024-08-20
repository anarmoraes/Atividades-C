#include<stdio.h>
int main(){
	int carrosvendidos;
	float salariofixo, total, venda, vendastotal, bonus, resultadofinal;
	
	printf("Digite o valor do seu salario fixo:\n", salariofixo);
	scanf("%f", &salariofixo);
	
	printf("Digite o valor total das suas vendas:\n", vendastotal);
	scanf("%f", &vendastotal);
	
	printf("Digite o valor dos carros vendidos:\n", carrosvendidos);
	scanf("%d", &carrosvendidos);
	
	printf("Digite o valor que voce recebe por cada carro vendido:\n", venda);
	scanf("%f", &venda);
	
	total = carrosvendidos*venda;
	bonus = 0.05*vendastotal;
	resultadofinal = salariofixo+total+bonus;
	
	printf("O salario final do vendedor e: %.2f\n", resultadofinal);
	
return 0;	
}
