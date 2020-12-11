/*
Desenvolver uma urna eletronica em C, com dois candidatos (A e B)
*/

#include <stdio.h>
#include <stdlib.h>

int voto;
int opcao,segundoTurno;
float candidatoA=0,candidatoB=0,nulo=0;
float porcA,porcB,porcNulo;

void escolherVoto();
void mostrarVotos();
void separador();
void resultado();

int main(){

    do{

    escolherVoto();
    mostrarVotos();
    separador();

    }while(opcao==2 || candidatoA == candidatoB);

    return 0;
}


void escolherVoto(){

    printf("Em qual candidato deseja votar:\n[1] - Candidato A\n[2] - Candidato B\n[3] - Nulo\n");
    scanf("%d",&voto);

    if (voto == 1){
        printf("Voce votou em candidato A!\n\n");
        candidatoA = candidatoA +1;

        separador();
    }

    if (voto == 2){
        printf("Voce votou em candidato B!\n\n");
        candidatoB = candidatoB +1;

        separador();
    }

    if(voto == 3){
        printf("Voce votou NULO.\n");
        nulo = nulo+1;

        separador();
    }

    if(voto > 3 || voto < 1){
        printf("Erro!\n");
        escolherVoto();
    }

    porcA = (candidatoA / (candidatoA + candidatoB + nulo)) *100;
    porcB = (candidatoB / (candidatoA + candidatoB + nulo)) *100;
    porcNulo = (nulo / (candidatoA + candidatoB + nulo)) *100;
}


void resultado(){
    if(candidatoA > candidatoB){
        printf("\nCandidato A foi o ganhador!\n");
    }
    if(candidatoB > candidatoA){
        printf("\nCandidato B foi o ganhador!\n");
    }

    if(candidatoA == candidatoB){
        printf("Empate!\n");
        candidatoA= 0;
        candidatoB= 0;
        nulo= 0;
    }
}



void mostrarVotos(){
    printf("Voce deseja ver a quantidade de votos ou votar mais uma vez:\n[1] - Ver votos.\n[2] - Votar novamente!\n");
    scanf("%d",&opcao);
    separador();

    if(opcao == 1){
        
        printf("Candidato A: %.f votos(%.2f%%)\nCandidato B: %.f votos(%.2f%%)\nNulos: %.f votos(%.2f%%)\n\n",candidatoA,porcA,candidatoB,porcB,nulo,porcNulo);
        resultado();
    }

    if(opcao > 2 || opcao < 1){
        printf("Erro!\n");
        mostrarVotos();
    }
}


void separador(){

    printf("_______________________________________________________________________\n\n");
}