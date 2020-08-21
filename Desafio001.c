#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  float Hipotenusa,CatetoA,CatetoB,CatA2,CatB2,Resultado;

  printf("Calculadora da formula do Teorema de Pitagoras \n");
  printf("Digite o valor do Cateto 1: \n");
  scanf("%f", &CatetoA);
  printf("Digite o valor de Cateto 2: \n");
  scanf("%f", &CatetoB);

  CatA2 = pow(CatetoA,2);
  CatB2 = pow(CatetoB,2);

  Resultado = (CatA2 + CatB2);
  Hipotenusa = sqrt(Resultado);

  printf("O valor da hipotenusa é: %.2f\n",Hipotenusa);

  return 0;
}
