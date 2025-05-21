#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigo_carta1[4],codigo_carta2[4];
    char cidade1[30],cidade2[30];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
    float densidade1,densidade2;
    float pib_per1,pib_per2;

    printf("Cidade 1: \n");

    printf("Escolha uma letra para representar o Estado (A até H):\n");
    scanf(" %c", &estado1);

    printf("Escolha um código para o Estado (Ex: A01):\n");
    scanf("%s", codigo_carta1);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade1);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao1);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area1);

    printf("Qual o valor do PIB da cidade(Em bilhões)?: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos1);


    densidade1 = (float)populacao1 / (float)area1;
    pib_per1 = ((float)pib1 * 1000000000) / (float)populacao1;

    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n",densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per1);

    printf("\nCidade 2: \n");

    printf("Escolha uma letra para representar o Estado (A até H): \n");
    scanf(" %c", &estado2);

    printf("Escolha um código para o Estado (Ex: A01): \n ");
    scanf("%s", codigo_carta2);

    printf("Escolha o nome da cidade: \n");
    scanf("%s",cidade2);

    printf("Qual o valor da população?: \n");
    scanf("%d", &populacao2);

    printf("Qual o tamanho da área em km²?: \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB da cidade?(Em bilhões): \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui?: \n");
    scanf("%d", &pontos_turisticos2);
    
    densidade2 = (float)populacao2 / (float)area2;
    pib_per2 = ((float)pib2* 1000000000) / (float)populacao2;
    

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n",densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per2);

    int escolha1,escolha2,resultado1,resultado2;

    printf("Esses são os parâmetros que você pode comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Pib per Capita\n");
    printf("\nEscolha o primeiro para comparar: ");
    scanf("%d",&escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Você escolheu popoulação!\n");
        printf("Cidade 1(%s): %d\n",cidade1,populacao1);
        printf("Cidade 2(%s): %d\n",cidade2,populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu Área!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,area1);
        printf("Cidade 2(%s): %.2f\n",cidade2,area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu PIB!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,pib1);
        printf("Cidade 2(%s): %.2f\n",cidade2,pib2);
        resultado1 = pib2 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu Pontos Turísticos!\n");
        printf("Cidade 1(%s): %d\n",cidade1,pontos_turisticos1);
        printf("Cidade 2(%s): %d\n",cidade2,pontos_turisticos2);
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu Densidade Populacional!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,densidade1);
        printf("Cidade 2(%s): %.2f\n",cidade2,densidade2);
        resultado1 = densidade1 < densidade1 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu PIB per Capita!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,pib_per1);
        printf("Cidade 2(%s): %.2f\n",cidade2,pib_per2);
        resultado1 = pib_per1 > pib_per2 ? 1 : 0;
        break;
    default:
        break;
    }
    printf("\nEscolha o segundo parâmetro para comparar: ");
    scanf("%d",&escolha2);
    if (escolha1 == escolha2)
    {
        printf("Escolha um atríbuto diferente!\n");
    }
    
switch (escolha2)
    {
    case 1:
        printf("Você escolheu popoulação!\n");
        printf("Cidade 1(%s): %d\n",cidade1,populacao1);
        printf("Cidade 2(%s): %d\n",cidade2,populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu Área!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,area1);
        printf("Cidade 2(%s): %.2f\n",cidade2,area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu PIB!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,pib1);
        printf("Cidade 2(%s): %.2f\n",cidade2,pib2);
        resultado2 = pib2 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu Pontos Turísticos!\n");
        printf("Cidade 1(%s): %d\n",cidade1,pontos_turisticos1);
        printf("Cidade 2(%s): %d\n",cidade2,pontos_turisticos2);
        resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu Densidade Populacional!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,densidade1);
        printf("Cidade 2(%s): %.2f\n",cidade2,densidade2);
        resultado2 = densidade1 < densidade1 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu PIB per Capita!\n");
        printf("Cidade 1(%s): %.2f\n",cidade1,pib_per1);
        printf("Cidade 2(%s): %.2f\n",cidade2,pib_per2);
        resultado2 = pib_per1 > pib_per2 ? 1 : 0;
        break;
    default:
        break;
    }

    printf("\nResultado: \n");
    if(resultado1 > 0 && resultado2 > 0){
        printf("A carta 1(%s) ganhou!",cidade1);
    }else if(resultado1 == 0 && resultado2 == 0){
        printf("A carta 2(%s) ganhou!",cidade2);
    }else{
        printf("Ocorreu um empate!");
    }



    
}

   
