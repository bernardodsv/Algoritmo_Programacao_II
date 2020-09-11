#include <stdio.h>
struct Aluno{
  int idade, matricula;
  char genero;
};
int main() {
  struct Aluno aluno;
  printf("Digite a idade:\n");
  scanf("%d", &aluno.idade);
  printf("Digite a matrícula:\n");
  scanf("%d", &aluno.matricula);
  printf("Digite o gênero:\n");
  scanf(" %c",&aluno.genero);
  printf("Dados do cadastro: \n");
  printf("Idade: %d\n",aluno.idade);
  printf("Matrícula: %d\n", aluno.matricula);
  printf("Gênero: %c\n", aluno.genero);

  return 0;
}
