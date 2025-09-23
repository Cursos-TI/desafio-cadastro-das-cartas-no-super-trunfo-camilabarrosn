#include <stdio.h>

int main() {


    // ===== CARTA 1 =====

    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1; 
   

    // Aqui começa a entrada de dados para carta 1:

    printf("****** Cadastro da Carta 1 *******\n\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf(" %d", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s\n", &cidade1);
    getchar(); // limpa o ENTER  

    printf("Digite a populacao: \n");
    scanf(" %d\n", &populacao1);
    

    printf("Digite a area em km2: \n");
    scanf("%f\n", &area1);
    

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o numero de pontos turísticos: \n");
    scanf(" %d\n", &pontosTuristicos1);
    getchar();
  
    // ===== CARTA 2 =====

    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib1 / populacao2;

    // Aqui começa a entrada de dados para carta 2:

    printf("\n******* Cadastro da Carta 2 *******\n\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): \n");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao2);

    printf("Digite a area em km2: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição após coleta de dados

    printf("\n===== Dados da Carta 1 =====\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/km2\n", densidade1);
    printf("PIB per capita: %.2f de reais\n", pibpercapita1);


    printf("\n===== Dados da Carta 2 =====\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/km2\n", densidade2);
    printf("PIB per capita: %.2f de reais\n", pibpercapita2);

    return 0;
}
