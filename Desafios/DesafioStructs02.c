/*
Desafio 2: criar um algoritmo para cadastrar e exibir os os dados de ve�culos.
Poder�o ser cadastrados carros ou motos, com as informa��es de marca, modelo e valor.
Dessa forma, solicitar ao usu�rio qual tipo de ve�culo ele deseja cadastrar
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


  printf("Que ve�culo voc� possui: [1] Carro [2] Moto\n");
  scanf("%d",&tipoVeiculo);

  if (tipoVeiculo == 1){
    printf("Digite a marca do seu carro: \n");
    scanf("%s", &carro.marca);
    printf("Digite o modelo do seu carro: \n");
    scanf("%s", &carro.modelo);
    printf("Digite o valor do seu carro: \n");
    scanf("%f", &carro.valorVeiculo);

    printf("A marca do carro �: %s\nO modelo do carro �: %s\nE o seu valor � de: R$%.3f \n",carro.marca,carro.modelo,carro.valorVeiculo);
  }
  else if(tipoVeiculo == 2){
    printf("Digite a marca da sua moto: \n");
    scanf("%s",&moto.marca);
    printf("Digite o modelo da sua moto: \n");
    scanf("%s",&moto.modelo);
    printf("Digite o valor da sua moto: \n");
    scanf("%f",&moto.valorVeiculo);

    printf("A marca da moto �: %s\nO modelo da moto �: %s\nE o seu valor � de: R$%.3f \n",moto.marca,moto.modelo,moto.valorVeiculo);
  }

  else if((tipoVeiculo != 1) && (tipoVeiculo != 2)){
    printf("valor n�o encontrado!!");
  }
  return 0;
}
