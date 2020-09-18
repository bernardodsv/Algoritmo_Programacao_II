/*
Desafio 2: criar um algoritmo para cadastrar e exibir os os dados de veículos.
Poderão ser cadastrados carros ou motos, com as informações de marca, modelo e valor.
Dessa forma, solicitar ao usuário qual tipo de veículo ele deseja cadastrar
e utilizar a mesma estrutura para ambos.
*/

#include <stdio.h>
#include <locale.h>

struct veiculos{
  char marca[20],modelo[20];
  float valorVeiculo;
};

int main (void){

  struct veiculos carro, moto;

  setlocale(LC_ALL,"portuguese");

  int tipoVeiculo;


  printf("Que veículo você possui: [1] Carro [2] Moto\n");
  scanf("%d",&tipoVeiculo);

  if (tipoVeiculo == 1){
    printf("Digite a marca do seu carro: \n");
    scanf("%s", &carro.marca);
    printf("Digite o modelo do seu carro: \n");
    scanf("%s", &carro.modelo);
    printf("Digite o valor do seu carro: \n");
    scanf("%f", &carro.valorVeiculo);

    printf("A marca do carro é: %s\nO modelo do carro é: %s\nE o seu valor é de: R$%.3f \n",carro.marca,carro.modelo,carro.valorVeiculo);
  }
  else if(tipoVeiculo == 2){
    printf("Digite a marca da sua moto: \n");
    scanf("%s",&moto.marca);
    printf("Digite o modelo da sua moto: \n");
    scanf("%s",&moto.modelo);
    printf("Digite o valor da sua moto: \n");
    scanf("%f",&moto.valorVeiculo);

    printf("A marca da moto é: %s\nO modelo da moto é: %s\nE o seu valor é de: R$%.3f \n",moto.marca,moto.modelo,moto.valorVeiculo);
  }

  else if((tipoVeiculo != 1) && (tipoVeiculo != 2)){
    printf("valor não encontrado!!");
  }
  return 0;
}
