/*
Desafio: a partir de um n�mero informdo pelo usu�rio do sistema, exibir na tela do computador os pr�ximos 5 n�meros pares.
*/

#include <stdio.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL,"portuguese");
  int numero;
  int contador;

  printf("Informe um n�mero: ");
  scanf("%d", &numero);

  // Verificar se o n�mero par

  if (numero%2 == 0){
    printf("O n�mero digitado � par\n");
    numero = numero +2;
  }
  else{
    printf("O n�mero � impar\n");
    numero = numero+1;
  }

  for (contador = 1; contador <= 5; contador++){
      printf("%d\n",numero);
      numero = numero + 2;
  }

  return 0;
}
