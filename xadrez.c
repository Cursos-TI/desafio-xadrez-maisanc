#include <stdio.h>

// Desafio de Super Trunfo
// Este código inicial serve como base para o desenvolvimento de duas cartas do super trunfo (Cada uma contendo 1 cidade e suas informações).
// O objetivo é utilizar entrada e saída de dados (printf e scanf).

int main() {
    //criando variáveis carta A e declarando as que não serão alteradas

    char state = 'A';
    char cardCode[10] = "01";
    char cityName[40];
    int population;
    float area; 
    float PIB;
    int tourism;

    //criando variáveis carta B e declarando as que não serão alteradas

    char stateTwo = 'B';
    char cardCodeTwo[10] = "02";
    char cityNameTwo[40];
    int populationTwo;
    float areaTwo; 
    float PIBTwo;
    int tourismTwo;

   

    //pedir dados da carta A
    printf("Digite o nome da primeira cidade (sem espaço): \n");
    scanf("%s", cityName);

    //pedir dados da carta B
    printf("Digite o nome da segunda cidade (sem espaço): \n");
    scanf("%s", cityNameTwo);

    //mostrandro dadosBra
    printf("\nCarta A - Estado %c - Cidade: %s\n", state, cityName);
    printf("Carta B - Estado %c - Cidade: %s\n", stateTwo, cityNameTwo);

    return 0;
}
