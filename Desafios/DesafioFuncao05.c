#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tabuleiroA[30], tabuleiroB[30];
int posicao_jogadorA = 0;
int posicao_jogadorB = 0;

void inicializar_tabuleiroA();
void inicializar_tabuleiroB();
void exibir_tabuleiros();
int sortear_dado();
void mover_jogadorA();
void mover_jogadorB();


int main() {
  inicializar_tabuleiroA();
  inicializar_tabuleiroB();
  exibir_tabuleiros();
  
  while ((posicao_jogadorA < 29) && (posicao_jogadorB < 29)) {
    mover_jogadorA();
    exibir_tabuleiros();
    mover_jogadorB();
    exibir_tabuleiros();
  }
  return 0;
}


void inicializar_tabuleiroA(){
  int i;
  for(i=0; i<30; i++) {
    tabuleiroA[i] = '_';
  }
}

void inicializar_tabuleiroB(){
  int i;
  for(i=0; i<30; i++) {
    tabuleiroB[i] = '_';
  }
}

void exibir_tabuleiros(){
  int i;
  for (i=0; i<30; i++) {
    printf("%c ", tabuleiroA[i]);
  }
  printf("\n");
  for (i=0; i<30; i++) {
    printf("%c ", tabuleiroB[i]);
  }
  printf("\n");
}

int sortear_dado(){
  int numero;
  srand(time(NULL));
  numero = (rand() % 6) + 1;
  return numero;
}

void mover_jogadorA(){
    char temp;
    int numero_sorteado;
    printf("Jogador A, é a sua vez.\n");
    printf("Pressione uma tecla para continuar\n");
    scanf("%c", &temp);
    numero_sorteado = sortear_dado();
    printf("O número sorteado foi %d\n", numero_sorteado);
    posicao_jogadorA = posicao_jogadorA + numero_sorteado;
    inicializar_tabuleiroA();
    tabuleiroA[posicao_jogadorA -1] = 'A';
    if ((posicao_jogadorA -1) >= 29 ){
      printf("Jogador A VENCEU!\n");
    }  
}

void mover_jogadorB(){
    char temp;
    int numero_sorteado;
    printf("Jogador B, é a sua vez.\n");
    printf("Pressione uma tecla para continuar\n");
    scanf("%c", &temp);
    numero_sorteado = sortear_dado();
    printf("O número sorteado foi %d\n", numero_sorteado);
    posicao_jogadorB = posicao_jogadorB + numero_sorteado;
    inicializar_tabuleiroB();
    tabuleiroB[posicao_jogadorB -1] = 'B';
    if ((posicao_jogadorB -1) >= 29 ){
      printf("Jogador B VENCEU!\n");
    } 
}