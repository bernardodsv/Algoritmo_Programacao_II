#include <stdio.h>

struct Endereco{
    int CEP;
    char rua[40];
    int numero;
    char complemento[20];
};

union Codigo{
    char CNPJ[20];
    char CPF[15];
};

struct Pessoa{
    char nome[20];
    char email[40];
    int idade;
    struct Endereco endereco;
    union Codigo codigo;
};

int main(){

    struct Pessoa pessoa;
    printf("Utilizando estruturas alinhas!\n");

    printf("Cadastro de pessoas:\n");

    printf("Nome: ");
    scanf("%s",pessoa.nome);

    printf("CEP:");
    scanf("%d",&pessoa.endereco.CEP);

    printf("Digite o codigo da pessoa: \n");
    scanf("%s",pessoa.codigo.CPF);

    printf("Exibir os dados cadastrados: \n");

    printf("Nome: %s\n",pessoa.nome);
    printf("CEP: %d\n",pessoa.endereco.CEP);
    printf("CPF: %s",pessoa.codigo.CPF);

    return 0;
}