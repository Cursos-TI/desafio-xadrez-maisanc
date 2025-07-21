#include <stdio.h>

// Desafio de Super Trunfo
// Este código inicial serve como base para o desenvolvimento de duas cartas do super trunfo (Cada uma contendo 1 cidade e suas informações).
// O objetivo é utilizar entrada e saída de dados (printf e scanf).

int main() {
    // ==== Declaração das variáveis para a Carta 1 ====

    char estado1;                      // Ex: 'A'
    char codigo1[5];                   // Ex: "A01" (string curta, 4 + '\0')
    char nomeCidade1[50];             // Nome da cidade (ex: SãoPaulo)
    int populacao1;                   // Número de habitantes
    float area1;                      // Área em km²
    float pib1;                       // PIB em bilhões
    int pontosTuristicos1;           // Número de pontos turísticos

    // ==== Declaração das variáveis para a Carta 2 ====

    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ==== Coleta de dados da Carta 1 ====

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); // espaço antes de %c ignora quebra de linha anterior

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1); // string = sem &

    printf("Nome da cidade (sem espaço): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==== Coleta de dados da Carta 2 ====

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade (sem espaço): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==== Exibição dos dados de cada carta ====

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}