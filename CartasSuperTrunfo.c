#include <stdio.h>


int main() {
    char estado;
    char codigo_carta[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Cidade 1: \n");

    printf("Escolha uma letra para representar o Estado (A até H): ");
    scanf(" %c", &estado);

    printf("Escolha um código para o Estado (Ex: A01): ");
    scanf("%s", codigo_carta);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area);

    printf("Qual o valor do PIB da cidade?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("\nCidade 2: \n");

    printf("Escolha uma letra para representar o Estado (A até H): ");
    scanf(" %c", &estado);

    printf("Escolha um código para o Estado (Ex: A01): ");
    scanf("%s", codigo_carta);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area);

    printf("Qual o valor do PIB da cidade?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
