#include <stdio.h>

void solicitarIdade();
void exibirIdade();
int idade; // variável global: disponível para todas as funções do programa

int main() {
  int meses; // variável local, ou de função que fica disponível apenas na própria função
  solicitarIdade();
  exibirIdade();

  return 0;
}

void solicitarIdade(){
  printf("Digita a sua idade:\n");
  scanf("%d", &idade);
}

void exibirIdade(){
  printf("A idade digitada foi: %d\n", idade);
}