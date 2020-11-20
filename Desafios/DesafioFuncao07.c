/*
Desafio: implementar o jogo par ou ímpar contra o computador, quem vencer numa melhor de 5 é o grande vencedor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int vezComputador,vezUsuario,escolha,verificadorParImpar,somaJogadas,pontosUsuario,pontosComputador;

void jogadasComputador();
void jogadasUsuario();
void parImpar();


void jogadaComputador(){
    srand(time(NULL));
    vezComputador = (rand() % 10 + 1);
}

void jogadaUsuario(){

    printf("Digite o que voce quer ser: [1] - PAR OU [2] - IMPAR \n");
    scanf("%d",&escolha);
    if(escolha == 1){
        printf("Escolheu par\n");
    }
    else{
        printf("Escolheu impar\n");
    }

    printf("Digite um numero de 0 a 10: \n");
    scanf("%d",&vezUsuario);

}

void parImpar(){
    somaJogadas = (vezUsuario + vezComputador);

    if (somaJogadas % 2 == 0){
        if(escolha == 1){
            printf("[Par] - Usuario venceu !\n");
            pontosUsuario = pontosUsuario + 1;
        }
        else{
            printf("[Par] - Computador venceu !\n");
            pontosComputador = pontosComputador + 1;
        }
    }

    if (somaJogadas % 2 != 0){
        if(escolha == 2){
            printf("[Impar] - Usuario venceu !\n");
            pontosUsuario = pontosUsuario + 1;
        }
        else{
            printf("[Impar] - Computador venceu !\n");
            pontosComputador = pontosComputador + 1;
        }

    }
}

int main(){

    while ((pontosUsuario + pontosComputador) < 5){
        
        jogadaUsuario();
        jogadaComputador();
        
        printf("Usuario: %d\n",vezUsuario);
        printf("Computador: %d\n",vezComputador);
        parImpar();

        system("pause");
        system("cls");
        
        if(pontosUsuario >= 3){
          printf("Usuario venceu a melhor de 5!\n");
          printf("Pontos = %d\n",pontosUsuario);
          printf("Pontos Computador = %d\n\n", pontosComputador);
          exit(0);
        }
        else if(pontosComputador >= 3){
          printf("Computador venceu a melhor de 5!\n");
          printf("Pontos Computador = %d\n\n", pontosComputador);
          printf("Pontos usuario = %d\n",pontosUsuario);
          exit(0);
        }
    }

    return 0;
}