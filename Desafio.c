#include <stdio.h>

int main(){
    int codigo;
    char nome[50];
    double populacao;
    float area, pib, turisticos;

    printf("Digite o código da cidade:\n");
    scanf("%d, &codigo");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf ("Digite a quantidade de pontos turisticos:\n");
    scanf("%f", &turisticos);

    printf("Código da cidade: %d\n",codigo );
    printf("Nome da cidade: %s\n", nome);
    printf("População: %f \n", populacao);
    printf("Area: %f \n" ,area);
    print("PIB: %f \n" ,pib);
    printf("Número de pontos turísticos: %f", turisticos);

    return 0;




    

}