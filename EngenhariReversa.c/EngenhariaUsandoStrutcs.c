#include <stdio.h>
#include <locale.h>

struct Aluno{
  char nome[23],cidade[30],email[50];
  int matricula;
  char genero;
};
int main() {

  setlocale(LC_ALL,"portuguese");

  struct Aluno aluno;

  printf("Digite o nome do aluno:\n");
  scanf("%s", aluno.nome);
  printf("Digite a cidade onde o aluno mora:\n");
  fflush(stdin);
  scanf("%s", aluno.cidade);
  printf("Digite o número da matrícula do aluno:\n");
  fflush(stdin);
  scanf("%d", &aluno.matricula);
  printf("Informe o email do aluno:\n");
  scanf("%s", &aluno.email);
  printf("Informe o gênero (M)asculino ou (F)eminino:\n");
  scanf(" %c", &aluno.genero);

  printf("DADOS DO ALUNO:\n");

  printf("Nome: %s\nCidade: %s\nMatricula: %d\nEmail: %s\nGênero: %c\n", aluno.nome, aluno.cidade, aluno.matricula, aluno.email, aluno.genero);
  return 0;
}
