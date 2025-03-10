#include <stdio.h>
#include <string.h>

int main()
{
    // Criando as variáveis (Estanciando o code1 e code2 com 4 espaços para recever operador null)
    char state1, state2;
    char code1[4], code2[4]; 
    char city1[50], city2[50];
    int population1, population2;
    int numberTuristicPoints1, numberTuristicPoints2;
    float area1, area2;
    float pib1, pib2;

    printf("Jogo Super Trunfo \n");

    // Solicitando os dados da primeira carta
    printf("Informe os dados da primeira carta \n");
    printf("Digite o estado: ");
    scanf(" %c", &state1);

    printf("Digite o código da carta: ");
    scanf("%3s", code1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", city1);

    printf("Digite a população: ");
    scanf("%d", &population1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite a o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numberTuristicPoints1);

    // Mostrando os dados da Carta 1
    printf("\nDados Carta 1: \n");
    printf("Estado: %c \n", state1);
    printf("Código: %s \n", code1);
    printf("Nome da Cidade: %s \n", city1);
    printf("População : %d \n", population1);
    printf("Área : %.2f km² \n", area1);
    printf("PIB : %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numberTuristicPoints1);

    // Solicitando os dados da segunda carta
    printf("\nInforme os dados da segunda carta \n");
    printf("Digite o estado: ");
    scanf(" %c", &state2);

    printf("Digite o código da carta: ");
    scanf("%3s", code2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", city2);

    printf("Digite a população: ");
    scanf("%d", &population2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite a o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numberTuristicPoints2);

    // Mostrando os dados da Carta 2
    printf("\nDados Carta 2: \n");
    printf("Estado: %c \n", state2);
    printf("Código: %s \n", code2);
    printf("Nome da Cidade: %s \n", city2);
    printf("População : %d \n", population2);
    printf("Área : %.2f km² \n", area2);
    printf("PIB : %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numberTuristicPoints2);
}