#include <stdio.h>

int main()
{

    int tabuleiro[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j];
        }
    }

    tabuleiro[0][2] = 5; // habilidade CONE
    tabuleiro[1][1] = 5;
    tabuleiro[1][2] = 5;
    tabuleiro[1][3] = 5;
    tabuleiro[2][2] = 5;
    tabuleiro[2][1] = 5;
    tabuleiro[2][3] = 5;
    tabuleiro[2][4] = 5;
    tabuleiro[2][0] = 5;

    tabuleiro[0][7] = 5; // habilidade CRUZ
    tabuleiro[1][7] = 5;
    tabuleiro[1][8] = 5;
    tabuleiro[1][9] = 5;
    tabuleiro[1][6] = 5;
    tabuleiro[1][5] = 5;
    tabuleiro[2][7] = 5;

    tabuleiro[4][5] = 5; // habilidade octaedro
    tabuleiro[5][5] = 5;
    tabuleiro[5][4] = 5;
    tabuleiro[5][6] = 5;
    tabuleiro[6][5] = 5;

    tabuleiro[3][1] = 3; // navio na VERTICAL
    tabuleiro[4][1] = 3;
    tabuleiro[5][1] = 3;

    tabuleiro[9][7] = 3; // navio na HORIZONTAL
    tabuleiro[9][8] = 3;
    tabuleiro[9][9] = 3;

    tabuleiro[6][7] = 3; // navio na DIAGONAL PARA DIREITA
    tabuleiro[5][8] = 3;
    tabuleiro[4][9] = 3;

    tabuleiro[9][3] = 3; // navio na FIAGONAL PARA ESQUERDA
    tabuleiro[8][2] = 3;
    tabuleiro[7][1] = 3;

    int cone[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cone[i][j] = 0;
        }
    }

    cone[0][2] = 5;
    cone[1][1] = 5;
    cone[1][2] = 5;
    cone[1][3] = 5;
    cone[2][0] = 5;
    cone[2][1] = 5;
    cone[2][2] = 5;
    cone[2][3] = 5;
    cone[2][4] = 5;

    printf("BATALHA NAVAL!\n");
    printf("   0 1 2 3 4 5 6 7 8 9 \n");
    printf("   . . . . . . . . . .\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d>", i);

        for (int j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}