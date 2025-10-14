#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Cálculo do Super Poder e Comparação de Cartas

int main()
{
    // Declaração de variaveis da carta 1.
    char estadoCarta1;
    char codigoCarta1[5];
    char cidadeCarta1[50];
    unsigned long int populacaoCarta1; 
    float areaCarta1;
    float pibCarta1;
    int pontosTurCarta1;
    float densidade1; 
    float pibPerCapita1; 
    float superPoder1;
    
    // Declaração de variaveis da carta 2.
    char estadoCarta2;
    char codigoCarta2[5];
    char cidadeCarta2[50];
    unsigned long int populacaoCarta2; 
    float areaCarta2;
    float pibCarta2;
    int pontosTurCarta2;
    float densidade2; 
    float pibPerCapita2; 
    float superPoder2; 

    printf("###### Bem-vindo(a) ao Super Trunfo - Países (Nível Mestre) ######\n");
    printf("Cadastre suas cartas a seguir:\n");

    // Bloco de código para entrada de dados da carta 1.
    printf("\n#### Cadastro Carta 1: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o CÓDIGO DA CARTA (ex: A01, B03): ");
    scanf("%s", codigoCarta1);
    printf("Digite o NOME DA CIDADE (nome composto junto. Ex:CampoGrande): ");
    scanf("%s", cidadeCarta1);
    printf("Digite a POPULAÇÃO DA CIDADE (sem pontos, use apenas números): ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a ÁREA DA CIDADE em km2 (use ponto como separador decimal): ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB DA CIDADE (use ponto como separador decimal): ");
    scanf("%f", &pibCarta1);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta1);

    // Cálculos Carta 1.
    // Cálculo Densidade Populacional
    densidade1 = (float)populacaoCarta1 / areaCarta1; 
    // Cálculo PIB 
    pibPerCapita1 = pibCarta1 / (float)populacaoCarta1;

    float inversoDensidade1 = (float) 1 / densidade1; // Inverso para o Super Poder

    // Super Poder = Pop + Area + PIB + PontosTur + PibPerCapita + (1/Densidade)
    superPoder1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + (float)pontosTurCarta1 + pibPerCapita1 + inversoDensidade1;


    // Bloco de código para entrada de dados da carta 2.
    printf("\n#### Cadastro Carta 2: ####\n");
    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o CÓDIGO DA CARTA (ex: A01, B03): ");
    scanf("%s", codigoCarta2);
    printf("Digite o NOME DA CIDADE (nome composto junto. Ex:CampoGrande): ");
    scanf("%s", cidadeCarta2);
    printf("Digite a POPULAÇÃO DA CIDADE (sem pontos, use apenas números): ");
    scanf("%lu", &populacaoCarta2); 
    printf("Digite a ÁREA DA CIDADE em km2 (use ponto como separador decimal): ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB DA CIDADE (use ponto como separador decimal): ");
    scanf("%f", &pibCarta2);
    printf("Digite a quantidade de PONTOS TURÍSTICOS da cidade: ");
    scanf("%d", &pontosTurCarta2);

    // Cálculos Carta 2.
    // Cálculo Densidade Populacional
    densidade2 = (float)populacaoCarta2 / areaCarta2; 
    // Cálculo PIB 
    pibPerCapita2 = pibCarta2 / (float)populacaoCarta2;
    
    float inversoDensidade2 = (float) 1 / densidade2; 
    
    // Super Poder = Pop + Area + PIB + PontosTur + PibPerCapita + (1/Densidade)
    superPoder2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + (float)pontosTurCarta2 + pibPerCapita2 + inversoDensidade2;


    // // Bloco de código para exibir ao usuário as cartas cadastradas com novos atributos.
    printf("\n###### CARTAS CADASTRADAS: ######\n");

    //Exibição da Carta 1.
    printf("\n###### CARTA 1: ######\n");
    printf("ESTADO: %c\n", estadoCarta1);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidadeCarta1);
    // Uso de %lu para unsigned long int
    printf("POPULAÇÃO: %lu\n", populacaoCarta1); 
    printf("ÁREA (km²): %.2f\n", areaCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta1);
    printf("DENSIDADE POPULACIONAL: %.4f \n", densidade1);
    printf("PIB PER CAPITA: %.4f \n", pibPerCapita1);
    printf("SUPER PODER: %.2f \n", superPoder1);

    //Exibição da Carta 2.
    printf("\n###### CARTA 2: ######\n");
    printf("ESTADO: %c\n", estadoCarta2);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta2);
    printf("CIDADE: %s\n", cidadeCarta2);
    printf("POPULAÇÃO: %lu\n", populacaoCarta2); // Uso de %lu para unsigned long int
    printf("ÁREA (km²): %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta2);
    printf("DENSIDADE POPULACIONAL: %.4f \n", densidade2);
    printf("PIB PER CAPITA: %.4f \n", pibPerCapita2);
    printf("SUPER PODER: %.2f \n", superPoder2); 

    
    // Exibição de comparação de atributos das cartas.
    printf("\n###### COMPARAÇÃO DE CARTAS: ######\n");
    
    // População
    if (populacaoCarta1 > populacaoCarta2) {
        printf("Carta 1 venceu. População: %lu.\n", populacaoCarta1);
    } else {
        printf("Carta 2 venceu. População: %lu.\n", populacaoCarta2);
    }
        
    // Área 
    if (areaCarta1 > areaCarta2) {
        printf("Carta 1 venceu. Área: %.2f.\n", areaCarta1);
    } else {
        printf("Carta 2 venceu. Área: %.2f.\n", areaCarta2);
    }
    
    // PIB 
    if (pibCarta1 > pibCarta2) {
        printf("Carta 1 venceu. PIB: %.2f.\n", pibCarta1);
    } else {
        printf("Carta 2 venceu. PIB: %.2f.\n", pibCarta2);
    }
    
    // Pontos Turísticos 
    if (pontosTurCarta1 > pontosTurCarta2) {
        printf("Carta 1 venceu. Pontos Turísticos: %d.\n", pontosTurCarta1);
    } else {
        printf("Carta 2 venceu. Pontos Turísticos: %d.\n", pontosTurCarta2);
    }
    
    //Densidade Populacional - regra reversa
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu. Densidade Populacional: %.4f.\n", densidade1);
    } else {
        printf("Carta 2 venceu. Densidade Populacional: %.4f.\n", densidade2);
    }
    
    //PIB per Capita 
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu. PIB per Capita: %.4f.\n", pibPerCapita1);
    } else {
        printf("Carta 2 venceu. PIB per Capita: %.4f.\n", pibPerCapita2);
    }
    
    // Super Poder
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu. Super Poder: %.2f.\n", superPoder1);
    } else {
        printf("Carta 2 venceu. Super Poder: %.2f.\n", superPoder2);
    }

    return 0;
}