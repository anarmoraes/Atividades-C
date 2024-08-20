#include<stdio.h>
int main(){
	float c, eleitores, vb, vn, vv;
	printf("Digite o numero de elitores do municipio:\n", eleitores);
	scanf("%f", &eleitores);
	printf("Digite os votos brancos:\n", vb);
	scanf("%f", &vb);
	printf("Digite os votos nulos:\n", vn);
	scanf("%f", &vn);
	printf("Digite os votos validos:\n", vv);
	scanf("%f", &vv);
	vb= (float)vb/eleitores*100;
	vn = (float)vn/eleitores*100;
	vv=(float)vv/eleitores*100;
	
	printf("O percentual que cada um representa e:\n\nVotos brancos:%.f%%\nVotos Nulos:%.f%%\nVotos Validos:%.f%%", vb, vn, vv);
	
return 0;	
}
