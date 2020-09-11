/*
Desafio: a partir de um número informdo pelo usuário do sistema, exibir na tela do computador os próximos 5 números pares.
*/

#include <stdio.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL,"portuguese");
  int numero;
  int contador;

  printf("Informe um número: ");
  scanf("%d", &numero);

  // Verificar se o número par

  if (numero%2 == 0){
    printf("O número digitado é par\n");
    numero = numero +2;
  }
  else{
    printf("O número é impar\n");
    numero = numero+1;
  }

  for (contador = 1; contador <= 5; contador++){
      printf("%d\n",numero);
      numero = numero + 2;
  }

  return 0;
}
