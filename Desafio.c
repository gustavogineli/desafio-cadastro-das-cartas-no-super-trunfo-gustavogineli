#include <stdio.h>

int main() {
    // Declarar variáveis para armazenar os dados das cartas
    char nomeCarta1[50], nomeCarta2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pibPerCapita1, pibPerCapita2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2, superPoder1, superPoder2;

    // Entrada de dados para a carta 1
    printf("Digite o nome da Carta 1: ");
    fgets(nomeCarta1, sizeof(nomeCarta1), stdin);

    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a carta 2
    getchar(); // Limpar o buffer do teclado
    printf("\nDigite o nome da Carta 2: ");
    fgets(nomeCarta2, sizeof(nomeCarta2), stdin);

    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // Cálculo do PIB per Capita
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB por pessoa
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB por pessoa

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidadePopulacional2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

