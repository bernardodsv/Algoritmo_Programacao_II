/*
Desafio: criar a estrutura e o algoritmo para cadastro
e exibi��o de dados de disciplinas (c�digo, nome, carga hor�ria).
*/
/*
Desafio: criar a estrutura e o algoritmo para cadastro e exibi��o de dados de disciplinas (c�digo, nome, carga hor�ria).
*/
#include <stdio.h>
#include <locale.h>

struct Disciplina{
  int codigo;
  char nome[30];
  int cargaHoraria;
};

int main(void) {

  setlocale(LC_ALL,"portuguese");

  struct Disciplina disciplina;

  printf("GERENCIAMENTO DE DISCIPLINAS\n");
  printf("Digite o c�digo da disciplina:\n");
  scanf("%d", &disciplina.codigo);
  fflush(stdin);
  printf("Digite o nome da disciplina\n");
  scanf("%s", disciplina.nome);
  fflush(stdin);
  printf("Informe a carga hor�ria da disciplina %s:\n", disciplina.nome);
  scanf("%d", &disciplina.cargaHoraria);

  printf("DADOS DA DISCIPLINA:\n");
  printf("C�digo: %d\n", disciplina.codigo);
  printf("Nome: %s\n", disciplina.nome);
  printf("Carga Hor�ria: %d\n", disciplina.cargaHoraria);

  return 0;
}
