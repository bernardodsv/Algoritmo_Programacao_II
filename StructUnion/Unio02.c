#include <stdio.h>

union Numero{
  int valor1;
  double valor2;
  int valor3;
  char nome[200];
};

int main() {

  union Numero numero;
  numero.valor3 = 100;
  //printf("%d\n", numero.valor1);
  //numero.valor2 = 20;

  //printf("%d\n", numero.valor2);
  printf("%f\n", numero.valor2);

  // exibir o tamanho da estrutura/dado/variável
  printf("Tamanho da União: %li\n", sizeof(numero));

  return 0;
}
