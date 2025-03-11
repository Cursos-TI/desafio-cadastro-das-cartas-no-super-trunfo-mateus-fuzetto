#include <stdio.h>
#include <string.h>

float calculatePopulationalDensity(int population, float area)
{
    return (float)(population / area);
}

float calculatePibPerCapita(double pib, int population)
{
    return (float)(pib / population);
}

int main()
{
    // Criando as variáveis (Estanciando o code1 e code2 com 4 espaços para receber o operador null)
    char state1, state2;
    char code1[4], code2[4];
    char city1[50], city2[50];
    int population1, population2;
    int numberTuristicPoints1, numberTuristicPoints2;
    float area1, area2;
    // Coloquei o PIB como double por causa da limitação de casas do float e como estamos trabalhando com bilhão, acaba sendo necessário
    double  pib1, pib2;
    float populationalDensity1, populationalDensity2;
    float pibPerCapita1, pibPerCapita2;

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
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numberTuristicPoints1);

    // Usando funções para gerar a densidade populacional e o pib per capita
    populationalDensity1 = calculatePopulationalDensity(population1, area1);
    pibPerCapita1 = calculatePibPerCapita(pib1, population1);

    // Mostrando os dados da Carta 1
    printf("\nDados Carta 1: \n");
    printf("Estado: %c \n", state1);
    printf("Código: %s \n", code1);
    printf("Nome da Cidade: %s \n", city1);
    printf("População : %d \n", population1);
    printf("Área : %.2f km² \n", area1);
    printf("PIB : %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numberTuristicPoints1);
    printf("Densidade Populacional: %.2f hab/km²\n", populationalDensity1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

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
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numberTuristicPoints2);

    // Usando funções para gerar a densidade populacional e o pib per capita
    populationalDensity2 = calculatePopulationalDensity(population2, area2);
    pibPerCapita2 = calculatePibPerCapita(pib2, population2);

    // Mostrando os dados da Carta 2
    printf("\nDados Carta 2: \n");
    printf("Estado: %c \n", state2);
    printf("Código: %s \n", code2);
    printf("Nome da Cidade: %s \n", city2);
    printf("População : %d \n", population2);
    printf("Área : %.2f km² \n", area2);
    printf("PIB : %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numberTuristicPoints2);
    printf("Densidade Populacional: %.2f hab/km²\n", populationalDensity2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
}