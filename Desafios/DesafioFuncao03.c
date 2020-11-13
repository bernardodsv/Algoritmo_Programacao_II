/*
Desafio: solicitar ao usuário a digitação de 20 números inteiros. Os 10 primeiros serão armazenados no vetorA e os 
10 últimos no vetorB. Criar um terceiro vetor que receberá a soma dos valores de cada posição do vetorA e vetorB. 
Ou seja, a primeira posição do terceiro vetor receberá o resultado da soma da primeira posição do vetorA com a 
primeira posição do vetorB. E, assim, para os demais. Ao final exibir o conteúdo de todos os vetores.
*/

#include <stdio.h>

int i,numeros[20],numerosA[10],numerosB[10],contadorA,contadorB,soma[10];

void solicitarNumeros();
void ordenarNumeros();
void calculadora();
void mostrarVetores();


void solicitarNumeros(){
  for (i = 0; i < 20; i++){
    printf("Numero: ");
    scanf("%d",&numeros[i]);

  }
}

void ordenarNumeros(){
    for (i = 0; i < 10; i++){
      numerosA[contadorA]=numeros[i];
      contadorA++;
    }
    for (i = 10; i < 20; i++){
        numerosB[contadorB] = numeros[i];
        contadorB++;
    }
}

void calculadora(){
    for(i = 0; i < 10; i++){
        soma[i] = numerosA[i]+numerosB[i];
    }
}

void mostrarVetores(){

    printf("\nVetor A:\n");
    for(i = 0; i < 10; i++){
      printf("%d ",numerosA[i]);
    }

    printf("\nVetor B:\n");
    for(i = 0; i < 10; i++){
      printf("%d ",numerosB[i]);
    }

    printf("\nVetor C:\n");
    for(i = 0; i < 10; i++){
      printf("%d ",soma[i]);
    }

}

int main(){

    solicitarNumeros();
    ordenarNumeros();
    calculadora();
    mostrarVetores();

    return 0;

}