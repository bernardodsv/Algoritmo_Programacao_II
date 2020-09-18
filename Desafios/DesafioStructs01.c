/*
Desafio: criar uma estrutura chamada calculadora que contenha 2 valores do tipo float.
Solicitar ao usu�rio que digite dois valores quaisquer;
Realizar o c�lculo das quatro opera��es aritm�ticas b�sicas entre esses dois valores lidos
e exibir as respostas na tela do computador.
*/

#include <stdio.h>
#include <locale.h>

struct Calculadora{
  float valor1,valor2;
  float soma,divisao,multiplicacao,subtracao;
};

int main(void){

  setlocale(LC_ALL,"portuguese");

  struct Calculadora calculadora;

  printf("Calculadora b�sica: \n\n");

  printf("Digite um valor: ");
  scanf("%f",&calculadora.valor1);
  printf("Digite outro valor: ");
  scanf("%f",&calculadora.valor2);

  calculadora.soma = calculadora.valor1 + calculadora.valor2;
  calculadora.divisao = calculadora.valor1 / calculadora.valor2;
  calculadora.multiplicacao = calculadora.valor1 * calculadora.valor2;
  calculadora.subtracao = calculadora.valor1 - calculadora.valor2;

  printf("As 4 opera��es b�sica com os numeros %.2f e %.2f, s�o: \n",calculadora.valor1,calculadora.valor2);
  printf("Soma: %.2f\n",calculadora.soma);
  printf("Divisao: %.2f\n",calculadora.divisao);
  printf("Multiplica��o: %.2f\n",calculadora.multiplicacao);
  printf("Subtra��o: %.2f\n",calculadora.subtracao);

  return 0;
}
