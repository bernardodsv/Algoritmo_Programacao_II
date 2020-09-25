#include <stdio.h>

union Pessoa{
  char cpf[15];
  char cnpj[20];
};

int main(void){
  union Pessoa pessoa;
  int opcao;

  printf("Deseja cadastrar pessoa (1) física ou (2)juridica?\n");
  scanf("%d", &opcao);
  fflush(stdin);

  switch(opcao){
    case 1: {
      printf("Informe o CPF:\n");
      scanf("%s", pessoa.cpf);
      printf("CPF informado: %s\n", pessoa.cpf);
      break;
    }
    case 2: {
      printf("Informe o CNPJ:\n");
      scanf("%s", pessoa.cnpj);
      printf("CNPJ informado: %s\n", pessoa.cnpj);
      break;
    }
  }

  //printf("CPF informado: %s\n", pessoa.cpf);
  //printf("CNPJ informado: %s\n", pessoa.cnpj);
  printf("Tamanho da União: %li\n", sizeof(pessoa));

  return 0;
}
