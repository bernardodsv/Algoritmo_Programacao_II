#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  float a,b,c,b2,c2,resul;

  printf("Calculadora da formula do Teorema de Pitagoras ");
  printf("Digite o valor do Cateto 1: ");
  scanf("%f",b);
  printf("Digite o valor de Cateto 2: ");
  scanf("%f",c);

  b2 = pow(b,2);
  c2 = pow(c,2);

  a = b2+c2;
  resul = sqrt(a);

  printf("O valor da hipotenusa é: %.2f",resul);


  return 0;
}
