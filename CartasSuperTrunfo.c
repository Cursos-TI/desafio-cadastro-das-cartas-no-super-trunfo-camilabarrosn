#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];        
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Aqui começa a entrada de dados para carta 1:

    printf("****** Cadastro da Carta 1 *******\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %c", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %c", &cidade1);  
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km2: ");
    scanf(" %f", &area1);
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Aqui começa a entrada de dados para carta 2:

    printf("\n******* Cadastro da Carta 2 *******\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %c", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %c", &cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição após coleta de dados:
    printf("\n===== Dados da Carta 1 =====\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== Dados da Carta 2 =====\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}