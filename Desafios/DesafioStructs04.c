/*
Desafio: criar a estrutura e o algoritmo para cadastro
e exibição de dados de disciplinas (código, nome, carga horária).
*/
/*
Desafio: criar a estrutura e o algoritmo para cadastro e exibição de dados de disciplinas (código, nome, carga horária).
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
  printf("Digite o código da disciplina:\n");
  scanf("%d", &disciplina.codigo);
  fflush(stdin);
  printf("Digite o nome da disciplina\n");
  scanf("%s", disciplina.nome);
  fflush(stdin);
  printf("Informe a carga horária da disciplina %s:\n", disciplina.nome);
  scanf("%d", &disciplina.cargaHoraria);

  printf("DADOS DA DISCIPLINA:\n");
  printf("Código: %d\n", disciplina.codigo);
  printf("Nome: %s\n", disciplina.nome);
  printf("Carga Horária: %d\n", disciplina.cargaHoraria);

  return 0;
}
