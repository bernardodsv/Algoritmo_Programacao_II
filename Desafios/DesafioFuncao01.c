/*
Desafio: desenvolver um algoitmo para solicitar ao usuαrio
2 numeros reais e realizar as quatro operaηυes aritmeticas bαsicas com esses nϊmeros.
No final do programa, exibir os resultados obtidos. Utilize funηυes para cada operaηγo.
*/

#include <stdio.h>

float n1,n2;
void recebendoNumero(){
    printf("Numero 1: \n");
    scanf("%f",&n1);
    printf("Numero 2: \n");
    scanf("%f",&n2);
}

void calculadora(){
    printf("\n");
    printf("%.2f + %.2f = %.2f\n",n1,n2,(n1+n2));
    printf("%.2f - %.2f = %.2f\n",n1,n2,(n1-n2));
    printf("%.2f * %.2f = %.2f\n",n1,n2,(n1*n2));
    printf("%.2f / %.2f = %.2f\n",n1,n2,(n1/n2));
}

int main(){
    recebendoNumero();
    calculadora();
}
