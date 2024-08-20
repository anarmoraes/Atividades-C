#include<stdio.h> 

int main () { 
  float b, c, a, d;
  printf ("Digite seu salario bruto: \n", b); 
  scanf ("%f", &b);
  printf ("Agora digite o porcentual de ajuste respectivamente: \n", c);
  scanf ("%f", &c);
  d = b*c/100;
  a = b+d;
  printf ("Seu salario atual com o reajuste corresponde a: %3.f", a);

return 0;
}
