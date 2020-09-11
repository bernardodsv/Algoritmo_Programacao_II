/*
Desafio: criar um algoritmo para calcular a média final de um aluno na disciplina de algoritmos.
Deverão ser informadas 3 notas e a frequência do aluno nas aulas.
Caso a média final seja maior ou igual a 6.0 e a frequência maior ou
igual a 75% o aluno está aprovado, caso contrário precisará refazer a disciplina.
*/

#include <stdio.h>

int main(void){

  float nota1, nota2, nota3,notaFinal;
  float frequencia;

  printf("Digite a nota 1: ");
  scanf("%f",&nota1);

  printf("Digite a nota 2: ");
  scanf("%f",&nota2);

  printf("Digite a nota 3: ");
  scanf("%f",&nota3);

  printf("Digite a frequencia do aluno em %: ");
  scanf("%f",&frequencia);

  notaFinal = ((nota1+nota2+nota3) / 3);

  if (frequencia > 100){
    printf("Erro! frequência não permitida.\n");
  }

  if ((nota1 || nota2 || nota3) > 10){
    printf("Erro! Nota não permitida.\n");
  }
  else{
    if((notaFinal >= 6) && (frequencia >= 75)){
      printf("Parabéns sua nota é %.2f e sua frequencia é: %.2f !!\n",notaFinal,frequencia);
    }
    if((notaFinal >= 6) && (frequencia < 75)){
      printf("Infelizmente você rodou por frequência!\n");
    }
    if((notaFinal < 6) && (frequencia >= 75)){
      printf("Sua nota é menor que a media 6.\n");
    }
  }

  return 0;
}
