#include <stdio.h>

void Torre(int num1)
{
    if (num1 > 0)
    {
        printf("Torre: Direita!\n");
        Torre(num1 - 1);
    }
}

void Bispo(int num1)
{
    if (num1 > 0)
    {
        printf("Bispo: Cima / Direita!\n");
        Bispo(num1 - 1);
    }
}

void Rainha(int num1)
{
    if (num1 > 0)
    {
        printf("Rainha: Esquerda!\n");
        Rainha(num1 - 1);
    }
}

void Cavalo(int num3)
{
    for (int numc = 1; numc == 1; numc++)
    {
        for (int numc2 = 1; numc2 < 3; numc2++)
        {
            printf("Cavalo: Cima!\n");
        }
        printf("Cavalo: Direita!\n");
    }
}

int main()
{

    int quantidade1 = 5;
    int quantidade2 = 8;
    int quantidade3 = 1;
    Torre(quantidade1);
    printf("############################################################\n");
    Bispo(quantidade1);
    printf("############################################################\n");
    Rainha(quantidade2);
    printf("############################################################\n");
    Cavalo(quantidade3);
    printf("############################################################\n");

    return 0;
}
