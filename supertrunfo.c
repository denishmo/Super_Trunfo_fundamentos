#include <stdio.h>

int main(){
    char cod1[3], cod2[3];
    char cidade1[30], cidade2[30];
    char estado1[30], estado2[30];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    float pibper1, pibper2;
    float denspop1, denspop2;
    int turis1, turis2;
    float superPoder1, superPoder2;

    
    
    //CARTA Número 01---------------------------------------

    printf("Digite o código da carta: ");
    scanf("%s", &cod1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite a população: \n");
    scanf("%d", &pop1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turis1);

    denspop1 = (pop1 / area1);
    pibper1 = (pib1 / pop1);
    superPoder1 = ((float)pop1 + area1 + pib1 + pibper1 + denspop1 + (float)turis1);
    

    //CARTA Número 02---------------------------------------

    printf("Digite o código da carta: ");
    scanf("%s", &cod2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turis2);

    denspop2 = (pop2 / area2);
    pibper2 = (pib2 / pop2);
    superPoder2 = ((float)pop2 + area2 + pib2 + pibper2 + denspop2 + (float)turis2);

    printf("Carta 1: \nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f\nPontos Turisticos: %d\n",
         cod1, cidade1, estado1, pop1, area1, pib1, turis1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %f\nSuper Poder: %f\n\n", denspop1, pibper1, superPoder1);

    printf("Carta 0: \nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f\nPontos Turisticos: %d\n",
         cod2, cidade1, estado2, pop2, area2, pib2, turis2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %f\nSuper Poder: %f\n\n", denspop2, pibper2, superPoder2);

    //Comparação das Cartas-------------------------------------------------

    printf("Comparação das cartas:\n\n");
    printf("População: A carta %d ganhou!\n", pop1 > pop2);
    printf("Área: A carta %d ganhou!\n", area1 > area2);
    printf("PIB: A carta %d ganhou!\n", pib1 > pib2);
    printf("Pontos Turísticos: A carta %d ganhou\n", turis1 > turis2);
    printf("Densidade Populacional: A carta %d ganhou\n", denspop1 < denspop2);
    printf("PIB per Capita: A carta %d ganhou\n", pibper1 < pibper2);
    printf("Super Poder: A carta %d ganhou!\n", superPoder1 > superPoder2);



    return 0;

}