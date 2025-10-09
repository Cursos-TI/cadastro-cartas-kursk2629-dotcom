#include <stdio.h>

int main() {
    // --- Declaração de variáveis da Carta 1 ---
    char estado1[30], cidade1[50], codigo1[10];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1;
    double pibPerCapita1, superPoder1;

    // --- Declaração de variáveis da Carta 2 ---
    char estado2[30], cidade2[50], codigo2[10];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2;
    double pibPerCapita2, superPoder2;

    // === ENTRADA DE DADOS ===
    printf("=== CARTA 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    scanf("%d", &pontosTuristicos2);

    // === CÁLCULOS ===
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = ((double)pib1 * 1000000000.0) / (double)populacao1;
    pibPerCapita2 = ((double)pib2 * 1000000000.0) / (double)populacao2;

    superPoder1 = (double)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (double)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // COMPARAÇÕES 
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    //valores dos calculos
    printf("\n--- Valores calculados ---\n");
    printf("Carta 1 - PIB per capita: %.2lf | Super Poder: %.2lf\n", pibPerCapita1, superPoder1);
    printf("Carta 2 - PIB per capita: %.2lf | Super Poder: %.2lf\n", pibPerCapita2, superPoder2);

    return 0;
     printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
}
 