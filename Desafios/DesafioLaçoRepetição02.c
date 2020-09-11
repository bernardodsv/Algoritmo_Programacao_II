/*
Desafio 4: escrever um algoritmo para exibir, na tela do computador, toda a tabuada (de 1 até 10)
de um número maior que 5 e menor do que 8 informado pelo usuário do software.
*/

#include <stdio.h>
int main(void){

  int numeroTabuada;
  int i;

  printf("Digite um n�mero entre: 5 e 8\n");
  scanf("%d",&numeroTabuada);

  if ((numeroTabuada > 5) && (numeroTabuada < 8)){
    printf("O n�mero digitado atende ao requesito;\n");
    for(i = 1; i <= 10; i++){
      printf("%d x %d = %d\n", numeroTabuada, i, (numeroTabuada*i));
    }
  }
  else{
    printf("Algo deu errado ! ");
  }

  return 0;
}
