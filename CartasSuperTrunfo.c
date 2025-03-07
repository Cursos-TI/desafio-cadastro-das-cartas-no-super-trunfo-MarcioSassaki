#include <stdio.h>

int main()
{

    char pais[10];
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[2];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;
    int NPT1, NPT2; // NPT = número de pontos turísticos
    float SuperPoder1, SuperPoder2;

    // CADASTRO DA CARTA 01

    printf("Digite um país: ");
    scanf(" %s", pais); // LENDO O PAÍS ESCOLHIDO

    printf("Qual o  código da carta: ");
    scanf(" %s", codigo1); // LENDO O CÓDIGO DA CARTA

    printf("Cite um estado do(a) %s: ", pais);
    scanf(" %s", estado1); // LENDO O ESTADO DO PAÍS

    printf("Diga uma cidade do estado escolhido: ");
    scanf(" %s", cidade1); // LENDO A CIDADE DO ESTADO

    printf("Qual a populacao? ");
    scanf(" %u", &populacao1); // LENDO A POPULACAO DA CIDADE

    printf("Qual a Area da cidade em km²? ");
    scanf(" %f", &area1); // LENDO A AREA EM KM²

    printf("Qual o PIB? ");
    scanf(" %f", &PIB1); // LENDO O PIB DA CIDADE

    printf("Em números, quantos pontos turisticos têm em %s ? ", cidade1);
    scanf(" %d", &NPT1); // LENDO A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE

    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + NPT1 + PIBpercapita1 + (1 / densidade1);

    printf("-----------------------------------------\n");

    printf("Resultado da Carta 01\n");
    printf("País: %s\n", pais);
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area em km²: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Possui %d pontos turisticos.\n", NPT1);
    printf("Densidade Populacional é: %f HAB/KM²\n", densidade1);
    printf("PIB per Capita: %f Reais\n", PIBpercapita1);
    printf("O Super Poder é: %f\n", SuperPoder1);

    printf("-----------------------------------------\n");

    // CADASTRO DA CARTA 02

    printf("Segunda Carta\n");

    printf("Qual o  código da carta 2:");
    scanf(" %s", codigo2); // LENDO O CÓDIGO ESCOLHIDO

    printf("Cite um estado do(a) %s:", pais);
    scanf(" %s", estado2); // LENDO O ESTADO DO PAÍS

    printf("Diga uma cidade do estado escolhido:");
    scanf(" %s", cidade2); // LENDO A CIDADE DO ESTADO

    printf("Qual a populacao?");
    scanf(" %u", &populacao2); // LENDO A POPULACAO DA CIDADE

    printf("Qual a Area da cidade em km²?");
    scanf(" %f", &area2); // LENDO A AERA EM KM²

    printf("Qual o PIB? ");
    scanf("%f", &PIB2); // LENDO O PIB DA CIDADE

    printf("Em números, quantos pontos turisticos têm em %s?", cidade2);
    scanf("%d", &NPT2); // LENDO A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + area2 + PIB2 + NPT2 + PIBpercapita2 + (1 / densidade2);

    printf("-----------------------------------------\n");

    printf("Resultado da Carta 02\n");
    printf("País: %s\n", pais);
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area em km²: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Possui %d pontos turisticos.\n", NPT2);
    printf("Densidade Populacional é: %f HAB/KM²\n", densidade2);
    printf("PIB per Capita: %f Reais\n", PIBpercapita2);
    printf("O Super Poder é: %f\n", SuperPoder2);

    printf("-----------------------------------------\n");

    printf("BATALHEM !!\n");

    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : (populacao1 < populacao2) ? "Carta 2 vence"
                                                                                                      : "Empatou");
    printf("Area em km²: %s\n", (area1 > area2) ? "Carta 1 vence" : (area1 < area2) ? "Carta 2 vence"
                                                                                    : "Empatou");
    printf("PIB: %s\n", (PIB1 > PIB2) ? "Carta 1 vence" : (PIB1 < PIB2) ? "Carta 2 vence"
                                                                        : "Empatou");
    printf("Pontos Turisticos: %s\n", (NPT1 > NPT2) ? "Carta 1 vence" : (NPT1 < NPT2) ? "Carta 2 vence"
                                                                                      : "Empatou");
    printf("Densidade Populacional: %s\n", (densidade1 > densidade2) ? "Carta 2 vence" : (densidade1 < densidade2) ? "Carta 1 vence"
                                                                                                                   : "Empatou");
    printf("PIB Per Capita: %s\n", (PIBpercapita1 > PIBpercapita2) ? "Carta 1 vence" : (PIBpercapita1 < PIBpercapita2) ? "Carta 2 vence"
                                                                                                                       : "Empatou");
    printf("Super Poder: %s\n", (SuperPoder1 > SuperPoder2) ? "Carta 1 vence" : (SuperPoder1 < SuperPoder2) ? "Carta 2 vence"
                                                                                                            : "Empatou");

    printf("FIM DE JOGO\n");

    return 0;
}