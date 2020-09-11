/*
Desafio 2: exibir os primeiros 20 números inteiros e positivos a partir de um número digitado pelo usuário
*/

#include <stdio.h>

int main (void){

  int numero,contador,numeroMaximo;

  printf("Digite um número: ");
  scanf("%d",&numero);

  if(numero%2==0){
    printf("Número par !\n");
    numero = numero+2;
  }
  else{
    printf("Número ímpar !\n");
    numero=numero+1;
  }

  numeroMaximo = (numero+19);

  for(contador = numero;contador <= numeroMaximo; contador++){
    printf("%d\n",numero);
    numero= numero+2;
  }

  return 0;
}
