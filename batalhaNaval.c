#include <stdio.h>
#include <stdlib.h>

int main() {

    // variáveis
    int tabuleiro [10][10];  //matriz para gerar um tabuleiro 10x10
    char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf ("=== JOGO DE BATALHA NAVAL ===\n\n");

    printf ("Inicializando o tabuleiro com agua:\n\n"); //inicialização do tabuleiro com 0 = água

    printf("..");
    for (int j = 0; j < 10; j++) {  //inicializa as letras das colunas
        printf ("%c ", colunas[j]);
    }

    printf ("\n");

    for (int i = 0; i < 10; i++){  //inicializa os numeros das linhas
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {  //inicializa o tabuleiro 10x10 com água 0
            tabuleiro[i][j] = 0;

            printf ("%d ", tabuleiro[i][j]);
        }
        printf ("\n"); //necessário o \n para tabular
    }

    printf ("\n");

    //posicionando os navios

    //variáveis

    int navio1 = 3;
    int navio2 = 3;

    printf ("Posicionando o navio 1...\n");

    for (int j = 6; j <= 8; j++){
        tabuleiro[8][j] = navio1;
    } 

    printf ("Posicionando o navio 2...\n");

    for (int i = 3; i <= 5; i++){
        tabuleiro[i][3] = navio2;
    }

    printf ("\n");

    // Exibindo o Tabuleiro com os 2 navios posicionados

    printf("..");
    for (int j = 0; j < 10; j++) {  
        printf ("%c ", colunas[j]);
    }

    printf ("\n");

    for (int i = 0; i < 10; i++){  
        printf("%d ", i);
        for (int j = 0; j < 10; j++) { 

            printf ("%d ", tabuleiro[i][j]);
        }
        printf ("\n"); //necessário o \n para tabular
    }

    printf ("\n");

    system ("pause");
    return 0;
}