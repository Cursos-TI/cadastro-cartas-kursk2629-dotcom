#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;
    float dens1, dens2;

    int opcao;
    float v1, v2;
    int menorVence = 0;

    // -------- CARTA 1 --------
    printf("=== CARTA 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%d", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pt1);

    printf("Densidade demografica: ");
    scanf("%f", &dens1);


    // -------- CARTA 2 --------
    printf("\n=== CARTA 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%d", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pt2);

    printf("Densidade demografica: ");
    scanf("%f", &dens2);


    // -------- MENU --------
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica (MENOR vence)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            v1 = pop1;
            v2 = pop2;
            printf("\nAtributo: Populacao\n");
            break;

        case 2:
            v1 = area1;
            v2 = area2;
            printf("\nAtributo: Area\n");
            break;

        case 3:
            v1 = pib1;
            v2 = pib2;
            printf("\nAtributo: PIB\n");
            break;

        case 4:
            v1 = pt1;
            v2 = pt2;
            printf("\nAtributo: Pontos turisticos\n");
            break;

        case 5:
            v1 = dens1;
            v2 = dens2;
            menorVence = 1;
            printf("\nAtributo: Densidade demografica (MENOR vence)\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }


    // -------- RESULTADO --------
    printf("\nComparando %s x %s\n", nome1, nome2);
    printf("Valor carta 1: %.2f\n", v1);
    printf("Valor carta 2: %.2f\n", v2);

    if (v1 == v2) {
        printf("\nResultado: EMPATE!\n");
    }
    else if ((!menorVence && v1 > v2) || (menorVence && v1 < v2)) {
        printf("\nVencedor: %s\n", nome1);
    }
    else {
        printf("\nVencedor: %s\n", nome2);
    }

    return 0;
}
