/*
Desafio 2: criar um algoritmo para cadastrar e exibir os os dados de ve�culos.
Poder�o ser cadastrados carros ou motos, com as informações de marca, modelo e valor.
Dessa forma, solicitar ao usuário qual tipo de ve�culo ele deseja cadastrar
e utilizar a mesma estrutura para ambos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct veiculos{
  char marca[20],modelo[20];
  float valor;
};

int main (void){

  struct veiculos veiculos;

  setlocale(LC_ALL,"portuguese");

  char tipoVeiculo[10];


  printf("Que veiculo você possui: 'carro' ou 'moto'\n");
  scanf("%s",tipoVeiculo);

  fflush(stdin);
  system("cls");

  printf("Digite a marca do/da %s:\n",tipoVeiculo);
  scanf("%s",veiculos.marca);

  printf("Digite o modelo do(a) %s:\n",tipoVeiculo);
  scanf("%s",veiculos.modelo);

  printf("Digite o valor do(a) %s:\n",tipoVeiculo);
  scanf("%f",&veiculos.valor);

  printf("\n\nA marca do %s é: %s\n",tipoVeiculo,veiculos.marca);
  printf("O modelo do %s é: %s\n",tipoVeiculo,veiculos.modelo);
  printf("O valor do %s é: %.3f\n",tipoVeiculo,veiculos.valor);

  return 0;
}
