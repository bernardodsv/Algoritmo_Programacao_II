/*
Uma Union é uma estrutura de dados para agrupar dados de tipos DIFERENTES como um UNICO OBJETIVO de dados.
Unions são tipos de dados derivados, e compartilham o mesmo espaço de armazenamento.

Em diferentes situações em um programa, algumas variáveis podem ser importantes, e outras podem não ser relevantes,
e uma union, por compartilhar o espaço entre suas variáveis internas acaba por economizar espaço de armazenamento.
*/

#include <stdio.h>
#include <string.h>

int main( ) {

  // Declarando a UNION
  union {
   int i;
   float f;
   char str[20];
  } dado;


  dado.i = 10; /* union sera do tipo inteiro */
  printf( "Sou inteiro : %d\n", dado.i);

  dado.f = 34.5; /* union sera do tipo float */
  printf( "Sou real : %f\n", dado.f);

  strcpy(dado.str,"Sou String"); /* union sera do tipo String */
  printf( "Sou string : %s\n", dado.str);

   return 0;
}
