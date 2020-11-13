/*
Desafio: desenvolver um algoritmo para solicitar ao usuário 10 números inteiros.
Os números pares serão armazenados em um vetor de pares e os números impares em um vetor de ímpares.
Ao final do programa, exiba o conteúdo dos dois vetores.
*/

#include <stdio.h>

int i,numero[10],par[10],impar[10],contadorPar=0,contadorImpar=0;

void verificador();
void mostrandoResultado();

int main(){

  for (i=0; i < 10; i++){
    printf("Numero: ");
    scanf("%d",&numero[i]);
  }
  verificador();
  mostrandoResultado();

  return 0;
}

void verificador(){

  for (i=0; i<10; i++){

    if(numero[i]%2 == 0){
      par[contadorPar]=numero[i];
      contadorPar++;
    }
    else{
      impar[contadorImpar] = numero[i];
      contadorImpar++;
    }

  }

}

void mostrandoResultado(){

  printf("\n\nNumeros pares: \n");

  for(i=0;i<contadorPar;i++){
    printf("%d\n",par[i]);
  }

  printf("\n\nNumero impares: \n");

  for(i=0;i<contadorImpar;i++){
  printf("%d\n",impar[i]);
  }
}
