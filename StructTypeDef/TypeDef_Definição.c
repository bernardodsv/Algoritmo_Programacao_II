/*
O comando typedef é usado para criar “sinônimo” para tipos de dados existentes.
Ou seja estamos renomeando um tipo de dados.

É importante ressaltar que o comando typedef não cria um novo tipo.
Ele apenas permite que um tipo existente seja definido de forma diferente,
de acordo com o desejo do programador.

*/

#include<stdio.h>
#include<stdlib.h>

//redefinindo os tipos básicos float e int
typedef float nota;
typedef int inteiro;
struct tAluno

{
//utilizando os tipos redefinidos dentro da struct
inteiro matricula ;
nota prova1;
nota prova2;
};

//redefinindo a struct para encurtar o comando na declaração
typedef struct tAluno tAluno ;

int main (void)
{
  /* declarando a variável do tipo tAluno
  note que com a redefinição agora não é mais necessário escrever struct tAluno */

  tAluno aluno ;

  nota media = 0;

  printf ("Informe o numero de matricula: ");
  scanf ("%d", &aluno.matricula);

  printf ("Informe a nota da primeira prova: ");
  scanf ("%f", &aluno.prova1);

  printf ("Informe a nota da segunda prova: ");
  scanf ("%f", &aluno.prova2);

  media = (aluno.prova1 + aluno.prova2) / 2;

  printf("\nMatricula.....: %d\n", aluno.matricula);
  printf("Media do aluno: %.2f", media);

  getch();
  return 0;
}
