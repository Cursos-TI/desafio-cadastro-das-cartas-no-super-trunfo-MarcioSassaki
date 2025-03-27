#include <stdio.h>
int main()
{
    printf("##########################\n");
    int numeroT = 1;
    int sequenciaT = 1;
    while (numeroT <= 5)
    {
        printf("%d - Torre: Direita!\n", sequenciaT);
        numeroT++;
        sequenciaT++;
    }
    printf("##########################\n");

    int numeroB = 1;
    int sequenciaB = 1;
    do
    {
        printf("%d - Bispo: Cima / Direita!\n", sequenciaB);
        numeroB++;
        sequenciaB++;

    } while (numeroB <= 5);

    printf("##########################\n");

    for (int numeroR = 1, sequenciaR = 1; numeroR <= 8; sequenciaR++, numeroR++)
    {

        printf("%d - Rainha: Esquerda!\n", sequenciaR);
    }
    printf("##########################\n");
    return 0;
}