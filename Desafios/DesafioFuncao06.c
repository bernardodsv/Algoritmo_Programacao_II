#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int jogador,computador;
int pontosJogador=0, pontosComputador=0;

void vezJogador();
int vezComputador();
void jogadas();
void jogo();


int main(){
    
    while((pontosJogador + pontosComputador) < 3){
        jogo();
        
        Sleep(3000);
        system("cls");

        if(pontosJogador >= 2){
          printf("Jogador venceu a melhor de 3!\n");
          printf("Pontos = %d\n",pontosJogador);
          printf("Pontos Computador = %d\n\n", pontosComputador);
          exit(0);
        }
        else if(pontosComputador >= 2){
          printf("Computador venceu a melhor de 3!\n");
          printf("Pontos Computador = %d\n\n", pontosComputador);
          printf("Pontos jogador = %d\n",pontosJogador);
          exit(0);
        }
    }

}

void vezJogador(){

    printf("Digite o que voce prefere:\n[1] - Pedra\n[2] - Papel\n[3] - Tesoura.\n");
    scanf("%d",&jogador);

    if(jogador == 1){
        printf("Voce escolheu Pedra!\n");
    }
    if(jogador == 2){
        printf("Voce escolheu Papel!\n");
    }
    if(jogador == 3){
        printf("Voce escolheu Tesoura!\n");
    }
}

int vezComputador(){

    srand(time(NULL));
    computador = (rand() % 3 + 1);

    printf("%d\n",computador);

    if(computador == 1){
        printf("Computador opcao: Pedra!\n");
    }
    if(computador == 2){
        printf("Computador opcao: Papel!\n");
    }
    if(computador == 3){
        printf("Computador opcao: Tesoura!\n");
    }
    return computador;
}

void jogadas() {
    if(jogador == computador){
        printf("EMPATE !");
    }

    if(jogador == 1 && computador == 2){
        printf("Computador venceu.");
        pontosComputador= pontosComputador+1;
    }

    if(jogador == 1 && computador == 3){
        printf("Jogador venceu");
        pontosJogador= pontosJogador+1;
    }

    if(jogador == 2 && computador == 1){
        printf("Jogador venceu");
        pontosJogador= pontosJogador+1;
    }

    if(jogador == 2 && computador == 3){
        printf("Computador venceu");
        pontosComputador= pontosComputador+1;
    }

    if(jogador == 3 && computador == 1){
        printf("Computador venceu");
        pontosComputador= pontosComputador+1;
    }

    if(jogador == 3 && computador == 2){
        printf("Jogador venceu");
        pontosJogador= pontosJogador+1;
    }
}

void jogo(){

    vezJogador();
    vezComputador();
    jogadas();
    

}