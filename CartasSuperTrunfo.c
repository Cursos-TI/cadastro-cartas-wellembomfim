#include <stdio.h>

int main (){
    char estado1[2], código1[4], cidade1[20];
    int população1, pontos1;
    float area1, pib1;
    
    printf("Desafio Xadrez\n");
    printf("CARTA 1\n");
    printf("Digite uma letra para estado\n");
    scanf("%s", estado1);

    printf("Digite código da carta\n");
    scanf("%s", código1);

    printf("Nome da cidade:\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &população1);

    printf("Area em km²:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos1);


    char estado2[2], código2[4], cidade2[20];
    int população2, pontos2;
    float area2, pib2;

    printf("CARTA 2\n");
    printf("Digite uma letra para estado\n");
    scanf("%s", estado2);

    printf("Digite código da carta\n");
    scanf("%s", código2);

    printf("Nome da cidade:\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%d", &população2);

    printf("Area em km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", código1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Area em km²: %0.f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", código2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Area em km²: %.0f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d", pontos2);

}
