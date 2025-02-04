#include <stdio.h>


int main() {
    char codigo[10];  
    char nome[50];
    float populacao;
    float area, pib, turisticos;

    // Leitura do código da cidade 
    printf("Digite o código da cidade (ex: A01):\n");
    fgets(codigo, sizeof(codigo), stdin);
  
    codigo[strcspn(codigo, "\n")] = '\0';

    // Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin);
  
    nome[strcspn(nome, "\n")] = '\0';

    // Leitura da população da cidade
    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    // Leitura da área da cidade
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    // Leitura do PIB da cidade
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    // Leitura do número de pontos turísticos
    printf("Digite o número de pontos turísticos:\n");
    scanf("%f", &turisticos);

    // Exibição dos dados inseridos
    printf("\nDados da cidade:\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %.2f\n", turisticos);

    return 0;
}

