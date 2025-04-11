#include <stdio.h>


int main() {
    char estado;
    char codigo_carta[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per;

    printf("Cidade 1: \n");

    printf("Escolha uma letra para representar o Estado (A até H):\n ");
    scanf(" %c", &estado);

    printf("Escolha um código para o Estado (Ex: A01):\n ");
    scanf("%s", codigo_carta);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area);

    printf("Qual o valor do PIB da cidade(Em bilhões)?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos);


    densidade = (float)populacao / (float)area;
    pib_per = ((float)pib * 1000000000) / (float)populacao;

    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km^2\n",densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per);

    printf("\nCidade 2: \n");

    printf("Escolha uma letra para representar o Estado (A até H): \n");
    scanf(" %c", &estado);

    printf("Escolha um código para o Estado (Ex: A01):\n ");
    scanf("%s", codigo_carta);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area);

    printf("Qual o valor do PIB da cidade?(Em bilhões): \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos);
    
    densidade = (float)populacao / (float)area;
    pib_per = ((float)pib* 1000000000) / (float)populacao;
    

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km^2\n",densidade);
    printf("PIB per Capita: %.2f reais", pib_per);
    return 0;
}
