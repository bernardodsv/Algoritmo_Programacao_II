/*
Desafio: implementar um algoritmo, em linguagem C, efetuar o log/registro das operações aritméticas entre 2 números.
O algoritmo deve, também, efetuar a leitura do log quando o usuário desejar/informar um código de recuperação de log.
*/

#include <stdio.h>

float num1,num2;
float soma,subt,mult,divi;

void calculos();
void gravarNumeros();
void lerNumeros();

int main(){

    printf("Digite um numero: ");
    scanf("%f",&num1);
    printf("Digite outro numero: ");
    scanf("%f",&num2);

    calculos();
    gravarNumeros();
    lerNumeros();
    printf("\n\n");

    return 0;
}


void calculos(){

    soma = (num1+num2);
    subt = (num1 - num2);
    mult = (num1 * num2);
    divi = (num1 / num2);

}

void gravarNumeros(){

    FILE *logs;

    logs = fopen("logs01.txt","a");

    fprintf(logs,"%.2f + %.2f = %.2f\n",num1,num2,soma);
    fprintf(logs,"%.2f - %.2f = %.2f\n",num1,num2,subt);
    fprintf(logs,"%.2f * %.2f = %.2f\n",num1,num2,mult);
    fprintf(logs,"%.2f / %.2f = %.2f\n\n\n",num1,num2,divi);

    fclose(logs);
}

void lerNumeros(){
    FILE *logs;

    logs = fopen("logs01.txt","r");
    
    float soma,subt,divi,mult;

    while(1){
        soma = fgetc(logs);
        if(soma == EOF){
            break;
        }
        else{
            printf("%.2f\n",soma);
        }

        subt = fgetc(logs);
        if(subt == EOF){
            break;
        }
        else{
            printf("%.2f\n",subt);
        }

        mult = fgetc(logs);
        if(mult == EOF){
            break;
        }
        else{
            printf("%.2f\n",mult);
        }

        divi = fgetc(logs);
        if(divi == EOF){
            break;
        }
        else{
            printf("%.2f\n",divi);
        }
    }
}