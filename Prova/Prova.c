#include <stdio.h>

//1) criar a estrutura Aluno com nome e matricula; (peso 1.0)

//2) criar a estrutura Professor com nome e regimeTrabalho; (peso 1.0)
//obs: o regime de trabalho de um professor pode ser horista, parcial ou integral

struct  Aluno {
  char nomeAluno[30];
  char matricula[30];
};

struct Professor{
  char nomeProfessor [30];
  char regimeTrabalho[40];
};

typedef struct {
  char nome[30];
  int cargaHoraria;
  struct Aluno aluno;
  struct Professor professor;
}Disciplina;

int main() {
  Disciplina disciplina;

  //3) Solicitar e armazenar no local correspondente as seguintes informações:
  //   3.1) nome e carga horária da disciplina (peso 2.0)
  //   3.2) nome e regime de trabalho do professor dessa disciplina (peso 2.0)
  //   3.3) nome e matricula do aluno dessa disciplina (peso 2.0)

  //4) Exibir, na tela do computador, todos os dados que foram cadastrados. (peso 2.0)

  printf("Nome da disciplina:\n");
  scanf("%s",disciplina.nome);

  printf("Carga horária da disciplina: \n");
  scanf("%d",&disciplina.cargaHoraria);

  printf("Nome do professor: \n");
  scanf("%s",disciplina.professor.nomeProfessor);

  printf("Regime do professor: \n");
  scanf("%s",disciplina.professor.regimeTrabalho);

  printf("Nome do aluno: \n");
  scanf("%s",disciplina.aluno.nomeAluno);

  printf("Matricula do aluno: \n");
  scanf("%s",disciplina.aluno.matricula);

  // Comando para limpara tela em linux:
  // printf("\e[H\e[2J");

  printf("Nome da disciplina: %s\n",disciplina.nome);
  printf("Carga horária da disciplina: %d\n",disciplina.cargaHoraria);
  printf("Nome do professor: %s\n",disciplina.professor.nomeProfessor);
  printf("Regime do professor: %s\n",disciplina.professor.regimeTrabalho);
  printf("Nome do aluno: %s\n",disciplina.aluno.nomeAluno);
  printf("Matricula do aluno: %s\n",disciplina.aluno.matricula);

  return 0;
}
