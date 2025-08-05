#include <stdio.h>

int main(){

    // Linhas tabuleiro
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Colunas tabuleiro
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Declaração da matriz do tabuleiro
    int tabuleiro[10][10] = {0};

    // Navio horizontal
    int navioH[3] = {3, 3, 3};
    for (int n = 0; n < 3; n++) {
        tabuleiro[4][2+n] = navioH[n];
    }

    // Navio vertical
    int navioV[3] = {3, 3, 3};
    for (int n = 0; n < 3; n++) {
        tabuleiro[1+n][7] = navioV[n];
    }

    printf("TABULEIRO - BATALHA NAVAL \n\n\t");
    // Mostra as colunas
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d \t", linhas[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
