#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    // Declaração de variaveis da carta 1.
    char estadoCarta1;
    char codigoCarta1[3];
    char cidadeCarta1[20];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTurCarta1;

    // Declaração de variaveis da carta 2.
    char estadoCarta2;
    char codigoCarta2[3];
    char cidadeCarta2[20];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTurCarta2;

    printf("###### Bem-vindo(a) ao Super Trunfo - Países ######\n");
    printf("Cadastre suas cartas a seguir:\n");

    // Bloco de código para entrada de dados da carta 1.
    printf("#### Cadastro Carta 1: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o CÓDIGO DA CARTA, sendo, a LETRA do ESTADO seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigoCarta1);
    printf("Digite o NOME DA CIDADE (em caso de nome composto digite tudo junto. Ex:CampoGrande): ");
    scanf("%s", &cidadeCarta1);
    printf("Digite a POPULAÇÃO DA CIDADE: ");
    scanf("%d", &populacaoCarta1);
    printf("Digite a ÁREA DA CIDADE em km2: ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB DA CIDADE: ");
    scanf("%f", &pibCarta1);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta1);


    // Bloco de código para entrada de dados da carta 2.
    printf("\n#### Cadastro Carta 2: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o CÓDIGO DA CARTA, sendo, a letra do ESTADO seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigoCarta2);
    printf("Digite o NOME DA CIDADE (em caso de nome composto digite tudo junto. Ex:CampoGrande): ");
    scanf("%s", &cidadeCarta2);
    printf("Digite a POPULAÇÃO DA CIDADE: ");
    scanf("%d", &populacaoCarta2);
    printf("Digite a ÁREA DA CIDADE em km2: ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB DA CIDADE: ");
    scanf("%f", &pibCarta2);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta2);

    // Bloco de código para exibir ao usuário as cartas cadastradas.
    printf("\n###### CARTAS CADASTRADAS: ######\n");
    printf("\n###### CARTA 1: ######\n");
    printf("ESTADO: %c\n", estadoCarta1);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidadeCarta1);
    printf("POPULAÇÃO: %d\n", populacaoCarta1);
    printf("ÁREA: %f\n", areaCarta1);
    printf("PIB: %f\n", pibCarta1);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta1);

    printf("\n###### CARTA 2: ######\n");
    printf("ESTADO: %c\n", estadoCarta2);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta2);
    printf("CIDADE: %s\n", cidadeCarta2);
    printf("POPULAÇÃO: %d\n", populacaoCarta2);
    printf("ÁREA: %f\n", areaCarta2);
    printf("PIB: %f\n", pibCarta2);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta2);

    return 0;
}