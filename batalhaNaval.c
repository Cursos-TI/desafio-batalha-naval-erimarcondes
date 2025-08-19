#include <stdio.h>

int main(){

    // Linhas tabuleiro
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Colunas tabuleiro
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Declaração da matriz do tabuleiro
    int tabuleiro[10][10] = {0};

    // NAVIOS:
    
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

    // Navio Diagonal 1
    int navioD1[3] = {3, 3, 3};
    for (int n = 0; n < 3; n++) {
        tabuleiro[6+n][0+n] = navioD1[n];
    }

    // Navio Diagonal 2
    int navioD2[3] = {3, 3, 3};
    for (int n = 0; n < 3; n++) {
        tabuleiro[4+n][9-n] = navioD2[n];
    }

    // HABILIDADES:

    // Cone
    int cone[3][5] = {0};
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        switch (i) {
            case 0:
            if (j == 2) {
                cone[i][j] = 5;
            }
            break;

            case 1:
            if (j > 0 && j < 4) {
                cone[i][j] = 5;
            }
            break;

            case 2:
            cone[i][j] = 5;
            break;
        }
        tabuleiro[i][1+j] = cone[i][j];
    }
    }


    // Cruz
    int cruz[3][5] = {0};
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        switch (i) {
            case 0:
            if (j == 2) {
                cruz[i][j] = 5;
            }
            break;

            case 1:
            cruz[i][j] = 5;
            break;

            case 2:
            if (j == 2) {
                cruz[i][j] = 5;
            }
            break;
        }
        tabuleiro[5+i][2+j] = cruz[i][j];      
    }
    }

    // Octaedro
    int octaedro[3][5] = {0};
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        switch (i) {
            case 0:
            if (j == 2) {
                octaedro[i][j] = 5;
            }
            break;

            case 1:
            if (j > 0 && j < 4) {
                octaedro[i][j] = 5;
            }
            break;

            case 2:
            if (j == 2) {
                octaedro[i][j] = 5;
            }
            break;
        }
        tabuleiro[7+i][5+j] = octaedro[i][j];
    }
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
