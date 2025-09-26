#include <stdio.h>

int main() {
    int carta = 1;
    char estado[3];
    char codigo[10];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos;
    float populacional;
    float pibc;

    // === CARTA 1 ===
    printf("=== CARTA %d ===\n", carta);

    printf("ESTADO: ");
    scanf("%s", estado);
    getchar(); 

    printf("CODIGO: ");
    scanf("%s", codigo);
    getchar();

    printf("NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade);

    printf("POPULAÇÃO: ");
    scanf("%f", &populacao);

    printf("ÁREA: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos);

    populacional = populacao / area;
    pibc = pib / populacao;

    printf("\n=== RESULTADO DA CARTA ===\n");
    printf("ESTADO: %s\nCÓDIGO: %s\nCIDADE: %s\n", estado, codigo, cidade);
    printf("POPULAÇÃO: %.2f\nÁREA: %.2f km²\nPIB: %.2f\n", populacao, area, pib);
    printf("PONTOS TURÍSTICOS: %d\n", pontos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f\n", populacional, pibc);

    // === CARTA 2 ===
    carta = 2;

    printf("\n=== CARTA %d ===\n", carta);

    printf("ESTADO: ");
    scanf("%s", estado);
    getchar(); 

    printf("CODIGO: ");
    scanf("%s", codigo);
    getchar();

    printf("NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade);

    printf("POPULAÇÃO: ");
    scanf("%f", &populacao);

    printf("ÁREA: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos);

    populacional = populacao / area;
    pibc = pib / populacao;

    printf("\n=== RESULTADO DA CARTA ===\n");
    printf("ESTADO: %s\nCÓDIGO: %s\nCIDADE: %s\n", estado, codigo, cidade);
    printf("POPULAÇÃO: %.2f\nÁREA: %.2f km²\nPIB: %.2f\n", populacao, area, pib);
    printf("PONTOS TURÍSTICOS: %d\n", pontos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f\n", populacional, pibc);

    return 0;
}
