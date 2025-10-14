#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro - Cadastro e Cálculo de Atributos

int main()
{
    // Declaração de variaveis da carta 1.
    char estadoCarta1;
    char codigoCarta1[5];
    char cidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTurCarta1;
    // Novos atributos para Carta 1.
    float densidade1;
    float pibPerCapita1;

    // Declaração de variaveis da carta 2.
    char estadoCarta2;
    char codigoCarta2[5];
    char cidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTurCarta2;
    // Novos atributos para Carta 2
    float densidade2;
    float pibPerCapita2;

    printf("###### Bem-vindo(a) ao Super Trunfo - Países ######\n");
    printf("Cadastre suas cartas a seguir:\n");

    // Bloco de código para entrada de dados da carta 1.
    printf("#### Cadastro Carta 1: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o CÓDIGO DA CARTA, sendo, a LETRA do ESTADO seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta1);
    printf("Digite o NOME DA CIDADE (em caso de nome composto digite tudo junto. Ex:CampoGrande): ");
    scanf("%s", cidadeCarta1);
    printf("Digite a POPULAÇÃO DA CIDADE (não utilize pontos e/ou vírgulas): ");
    scanf("%d", &populacaoCarta1);
    printf("Digite a ÁREA DA CIDADE em km2: ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB DA CIDADE: ");
    scanf("%f", &pibCarta1);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta1);

    // Cálculos Carta 1 - Uso de casting para forçar a conversão de um tipo de dado para outro.
    // Cálculo Densidade Populacional
    densidade1 = (float)populacaoCarta1 / areaCarta1;
    // Cálculo PIB 
    pibPerCapita1 = pibCarta1 / (float)populacaoCarta1;


    // Bloco de código para entrada de dados da carta 2.
    printf("\n#### Cadastro Carta 2: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o CÓDIGO DA CARTA, sendo, a letra do ESTADO seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta2);
    printf("Digite o NOME DA CIDADE (em caso de nome composto digite tudo junto. Ex:CampoGrande): ");
    scanf("%s", cidadeCarta2);
    printf("Digite a POPULAÇÃO DA CIDADE (não utilize pontos e/ou vírgulas):");
    scanf("%d", &populacaoCarta2);
    printf("Digite a ÁREA DA CIDADE em km2: ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB DA CIDADE: ");
    scanf("%f", &pibCarta2);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta2);

    // Cálculos Carta 2 - Uso de casting para forçar a conversão de um tipo de dado para outro.
    // Cálculo Densidade Populacional.
    densidade2 = (float)populacaoCarta2 / areaCarta2;
    // Cálculo PIB
    pibPerCapita2 = pibCarta2 / (float)populacaoCarta2;

    // Bloco de código para exibir ao usuário as cartas cadastradas com os novos atributos.
    printf("\n###### CARTAS CADASTRADAS: ######\n");

    //Exibição da Carta 1.
    printf("\n###### CARTA 1: ######\n");
    printf("ESTADO: %c\n", estadoCarta1);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidadeCarta1);
    printf("POPULAÇÃO: %d\n", populacaoCarta1);
    printf("ÁREA (km²): %.2f\n", areaCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta1);
    // Exibição dos novos atributos
    printf("DENSIDADE POPULACIONAL: %.4f \n", densidade1);
    printf("PIB PER CAPITA: %.4f \n", pibPerCapita1);


    //Exibição da Carta 2.
    printf("\n###### CARTA 2: ######\n");
    printf("ESTADO: %c\n", estadoCarta2);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta2);
    printf("CIDADE: %s\n", cidadeCarta2);
    printf("POPULAÇÃO: %d\n", populacaoCarta2);
    printf("ÁREA (km²): %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta2);
    // Exibição dos novos atributos
    printf("DENSIDADE POPULACIONAL: %.4f \n", densidade2);
    printf("PIB PER CAPITA: %.4f \n", pibPerCapita2);

    return 0;
}