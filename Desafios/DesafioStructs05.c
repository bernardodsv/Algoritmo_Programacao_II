/*
Desafio livre utilizando STRUCTS
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct modeloComputacional{
  char modelo[30],processador[30],placaVideo[30];
  int memoriaRam;
};

int main(void){

  setlocale(LC_ALL,"portuguese");

  struct modeloComputacional modeloComputador;

  printf("NESSE PROGRAMA IREMOS RECEBER E EXIBIR AS INFORMAÇÕES DE SEU COMPUTADOR: \n");

  printf("Digite o modelo de seu computador: ");
  scanf("%s",modeloComputador.modelo);
  fflush(stdin);
  printf("Digite o processador de seu computador: ");
  scanf("%s",modeloComputador.processador);
  fflush(stdin);
  printf("Digite a quantidade de memoria ram de seu computador em gb: ");
  scanf("%d",&modeloComputador.memoriaRam);
  fflush(stdin);
  printf("Digite a placa de video que seu computador possui: ");
  scanf("%s",modeloComputador.placaVideo);
  fflush(stdin);

  system("cls");

  printf("Seu computador possui as seguintes especificações: \n\n");

  printf("Modelo: %s\nProcessador: %s\nMemoria ram: %dgb\nPlaca de video: %s\n",modeloComputador.modelo,modeloComputador.processador,modeloComputador.memoriaRam,modeloComputador.placaVideo);

  return 0;
}
