/*
Desafio: desenvolver um algoitmo para solicitar ao usuαrio
2 nϊmeros reais e realizar as quatro operaηυes aritmιticas bαsicas com esses nϊmeros.
No final do programa, exibir os resultados obtidos. Utilize funηυes para cada operaηγo.
*/

#include <stdio.h>

void numeros();
void exibirCalculos();
int numero1,numero2;

int main(){

  numeros();
  exibirCalculos();

  return 0;
}

void numeros(){
  printf("Digite um numero inteiro: \n");
  scanf("%d",&numero1);
  printf("Digite um numero inteiro: \n");
  scanf("%d",&numero2);
}

void exibirCalculos(){
  printf("%d + %d = %d\n",numero1,numero2,(numero1+numero2));
  printf("%d - %d = %d\n",numero1,numero2,(numero1-numero2));
  printf("%d * %d = %d\n",numero1,numero2,(numero1*numero2));
  printf("%d / %d = %d\n",numero1,numero2,(numero1/numero2));
}
