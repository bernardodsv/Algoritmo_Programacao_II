/*
Desafio: criar uma estrutura chamada calculadora que contenha 2 valores do tipo float.
Solicitar ao usuário que digite dois valores quaisquer;
Realizar o cálculo das quatro operações aritméticas básicas entre esses dois valores lidos
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

  printf("Calculadora básica: \n\n");

  printf("Digite um valor: ");
  scanf("%f",&calculadora.valor1);
  printf("Digite outro valor: ");
  scanf("%f",&calculadora.valor2);

  calculadora.soma = calculadora.valor1 + calculadora.valor2;
  calculadora.divisao = calculadora.valor1 / calculadora.valor2;
  calculadora.multiplicacao = calculadora.valor1 * calculadora.valor2;
  calculadora.subtracao = calculadora.valor1 - calculadora.valor2;

  printf("As 4 operações básica com os numeros %.2f e %.2f, são: \n",calculadora.valor1,calculadora.valor2);
  printf("Soma: %.2f\n",calculadora.soma);
  printf("Divisao: %.2f\n",calculadora.divisao);
  printf("Multiplicação: %.2f\n",calculadora.multiplicacao);
  printf("Subtração: %.2f\n",calculadora.subtracao);

  return 0;
}
