#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//DECLARANDO AS VARIAVEIS
    char estado[50];    
    char cidade[50];
    char carta[10];
    double pib;   
    int area, populacao, pontos;
  // Área para entrada de dados
//COLETANDO AS CARACTERISTICAS
    printf("\n---SUPER TRUNFO---\n");
    printf("NOME DO ESTADO: ");
    scanf(" %[^\n]", estado);

    printf("NOME DA CIDADE: ");
    scanf(" %[^\n]", cidade);

    printf("CÓDIGO DA CARTA: ");
    scanf("%s", carta);

    printf("PIB: ");
    scanf("%lf", &pib);  

    printf("ÁREA: ");
    scanf("%d", &area);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao);

    printf("PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos);
  // Área para exibição dos dados da cidade
//EXIBIDO AS INFORMACOES
    printf("\n--- RESULTADO ---\n");
    printf("NOME DO ESTADO: %s\n", estado);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("CÓDIGO DA CARTA: %s\n", carta);
    printf("PIB: %.3lf\n", pib);   
    printf("ÁREA: %dm²\n", area);
    printf("POPULAÇÃO: %d\nPONTOS TURÍSTICOS: %d\n", populacao, pontos);

    //RODADA DE DUAS CARTAS
return 0;
} 
