#include <stdio.h>

void exibirMensagem();
void darBoasVindas();

int main() {

  printf("Iniciar algoritmo\n");
  exibirMensagem();
  darBoasVindas();

  return 0;
}

void exibirMensagem(){
  printf("Eu amo Computação\n");
}

void darBoasVindas(){
  printf("Seja bem-vindo\n");
  printf("Essa é outra função\n");
}