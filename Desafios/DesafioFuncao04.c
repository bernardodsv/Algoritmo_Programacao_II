#include <stdio.h>

void recebendoDados(float a, float b){
    
    printf("Numero: ");
    scanf("%f", &a);
    printf("Numero: ");
    scanf("%f", &b);

}

void calculando(float a, float b){

    printf("%.2f + %.2f = %.2f\n",a,b,(a+b));
    printf("%.2f - %.2f = %.2f\n",a,b,(a-b));
    printf("%.2f * %.2f = %.2f\n",a,b,(a*b));
    printf("%.2f / %.2f = %.2f\n",a,b,(a/b));

}

int main(){

    recebendoDados();
    calculando(a,b);
    return 0;

}