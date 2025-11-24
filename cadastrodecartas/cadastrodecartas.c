#include <stdio.h>

int main() {
    char pais1[50], pais2[50];
    int pop1, pop2, pontos1, pontos2;
    float are1, are2, pib1, pib2, dens1, dens2;
    
    int opcao;
    float v1, v2;
    int menorVence;

    // Variáveis para impedir repetir atributos
    int usadoPop = 0;
    int usadoArea = 0;
    int usadoPIB = 0;
    int usadoPontos = 0;
    int usadoDens = 0;

    // -------- CARTA 1 --------
    printf("=== CARTA 1 ===\n");  
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais1);
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("Area: ");
    scanf("%f", &are1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("Densidade demografica: ");
    scanf("%f", &dens1);

    // -------- CARTA 2 --------
    printf("\n=== CARTA 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais2);
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("Area: ");
    scanf("%f", &are2);
    printf("PIB: ");
    scanf("%f", &pib2); 
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("Densidade demografica: ");
    scanf("%f", &dens2);
    

    // ---------- LOOP DO MENU ----------
    while (!usadoPop || !usadoArea || !usadoPIB || !usadoPontos || !usadoDens) {
        
        menorVence = 0; // reset a cada rodada

        printf("\n=== MENU DE COMPARAÇÕES ===\n");
        if (!usadoPop)    printf("1 - Populacao\n");
        if (!usadoArea)   printf("2 - Area\n");
        if (!usadoPIB)    printf("3 - PIB\n");
        if (!usadoPontos) printf("4 - Pontos turisticos\n");
        if (!usadoDens)   printf("5 - Densidade demografica (MENOR vence)\n");

        printf("Escolha o atributo para comparar (0 para sair): ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando comparações.\n");
            break;
        }

        // -------- BLOQUEIO --------
        if (opcao == 1 && usadoPop) {
            printf("\nERRO: POPULACAO ja foi usada!\n");
            continue;
        }
        if (opcao == 2 && usadoArea) {
            printf("\nERRO: AREA ja foi usada!\n");
            continue;
        }
        if (opcao == 3 && usadoPIB) {
            printf("\nERRO: PIB ja foi usado!\n");
            continue;
        }
        if (opcao == 4 && usadoPontos) {
            printf("\nERRO: PONTOS TURISTICOS ja foi usado!\n");
            continue;
        }
        if (opcao == 5 && usadoDens) {
            printf("\nERRO: DENSIDADE ja foi usada!\n");
            continue;
        }


        // -------- MARCA E COMPARA --------
        switch (opcao) {
            case 1:
                usadoPop = 1;
                v1 = pop1; v2 = pop2;
                break;
            case 2:
                usadoArea = 1;
                v1 = are1; v2 = are2;
                break;
            case 3:
                usadoPIB = 1;
                v1 = pib1; v2 = pib2;
                break;
            case 4:
                usadoPontos = 1;
                v1 = pontos1; v2 = pontos2;
                break;
            case 5:
                usadoDens = 1;
                v1 = dens1; v2 = dens2;
                menorVence = 1;
                break;
            default:
                printf("Opcao invalida!\n");
                continue;
        }

        // -------- RESULTADO --------
        printf("\nComparando %s x %s\n", pais1, pais2);
        printf("Valor carta 1: %.2f\n", v1);
        printf("Valor carta 2: %.2f\n", v2);

        if (v1 == v2) {
            printf("\nResultado: EMPATE!\n");
        }
        else if ((!menorVence && v1 > v2) || (menorVence && v1 < v2)) {
            printf("\nVencedor: %s\n", pais1);
        }
        else {
            printf("\nVencedor: %s\n", pais2);
        }
    }

    printf("\nTodos os atributos foram usados!\n");
    return 0;
}
