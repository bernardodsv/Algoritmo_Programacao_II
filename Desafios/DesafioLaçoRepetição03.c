/*
Desafio 2: exibir os primeiros 20 n�meros inteiros e positivos a partir de um n�mero digitado pelo usu�rio
*/

#include <stdio.h>

int main (void){

  int numero,contador,numeroMaximo;

  printf("Digite um n�mero: ");
  scanf("%d",&numero);

  if(numero%2==0){
    printf("N�mero par !\n");
    numero = numero+2;
  }
  else{
    printf("N�mero �mpar !\n");
    numero=numero+1;
  }

  numeroMaximo = (numero+19);

  for(contador = numero;contador <= numeroMaximo; contador++){
    printf("%d\n",numero);
    numero= numero+2;
  }

  return 0;
}
