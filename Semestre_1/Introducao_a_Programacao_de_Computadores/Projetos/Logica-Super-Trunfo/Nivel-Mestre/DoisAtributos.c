#include <stdio.h>

// Desafio Lógica Super Trunfo - Países

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

  // Variaveis para o menu interativo.
  int atributoEscolhido1, atributoEscolhido2;
  int resultado1, resultado2; // Variaveis para armazenar o resultado da operação ternária (1 ou 0)
  float somaCarta1, somaCarta2; // Variavel para armazenar a soma dos valores dos atributos escolhidos
  float valorAtributo1Carta1, valorAtributo1Carta2; // Variaveis para armazenar os valores dos atributos escolhidos para a primeira comparação
  float valorAtributo2Carta1, valorAtributo2Carta2; // Variaveis para armazenar os valores dos atributos escolhidos para a segunda comparação

  printf("\n=================================================\n");
  printf("##### Bem-vindo(a) ao Super Trunfo - Países #####");
  printf("\n=================================================\n");
  printf("\nCadastre suas cartas a seguir:\n");
  printf("\n=================================================\n");
  // Bloco de código para entrada de dados da carta 1.
  printf("#### Cadastro Carta 1: ####\n");
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
  printf("\n=================================================\n");  
  // Cálculos Carta 1.
  // Cálculo Densidade Populacional
  densidade1 = (float)populacaoCarta1 / areaCarta1; 
  // Cálculo PIB 
  pibPerCapita1 = pibCarta1 / (float)populacaoCarta1;

  float inversoDensidade1 = (float) 1 / densidade1; // Inverso para o Super Poder

  // Super Poder = Pop + Area + PIB + PontosTur + PibPerCapita + (1/Densidade)
  superPoder1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + (float)pontosTurCarta1 + pibPerCapita1 + inversoDensidade1;

  // Bloco de código para entrada de dados da carta 2.
  printf("#### Cadastro Carta 2: ####\n");
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

  // Menu interativo para o usuário escolher o atributo a ser comparado.
  printf("\n=================================================\n");
  printf("***ATENÇÃO***\n");
  printf("O JOGO VAI COMEÇAR!\n");
  printf("=================================================\n");
  printf("Escolha o primeiro atributo que deseja comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. PIB per Capita\n");
  printf("6. Densidade Populacional\n");
  printf("7. Super Poder\n");
  scanf("%d", &atributoEscolhido1); // Escolha do primeiro atributo a ser comparado pelo usuário.

  printf("=================================================\n");
  printf("Agora escolha o segundo atributo que deseja comparar:\n"); 
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. PIB per Capita\n");
  printf("6. Densidade Populacional\n");
  printf("7. Super Poder\n");
  scanf("%d", &atributoEscolhido2); // Escolha do segundo atributo a ser comparado pelo usuário.

  
  if (atributoEscolhido1 == atributoEscolhido2) { // Verificação se os atributos escolhidos são iguais
    printf("Atributos escolhidos são iguais! Por favor, escolha atributos diferentes.\n");
    return 0;
  }else{
    printf("=================================================\n");
    printf("###### RESULTADO DA PARTIDA: ######\n");
    printf("=================================================\n");
    printf("Nome Cidade - Carta 1: %s\n", cidadeCarta1);
    printf("Nome Cidade - Carta 2: %s\n", cidadeCarta2);
    printf("=================================================\n");
    switch (atributoEscolhido1) // Uso de switch para comparar o primeiro atributo escolhido pelo usuário no menu interativo.
    {
    // Uso de estruturas encadeadas e aninhadas nas cases para comparar os atributos e exibir o resultado.
    case 1: // População
    if (populacaoCarta1 > 0 && populacaoCarta2 > 0) { // Verificação se o valor do atributo é maior que zero nas duas cartas.
      printf("Atributo 1 escolhido: 1 - População\n");
      resultado1 = populacaoCarta1 > populacaoCarta2 ? 1 : 0; // Uso de operador ternário para definir o vencedor
      valorAtributo1Carta1 = populacaoCarta1; // Armazena o valor do atributo para exibição no resultado final
      valorAtributo1Carta2 = populacaoCarta2;

    } else {
      printf("Atributo População não cadastrado em ambas as cartas.\n");
      return 0;
      }
    break;

    case 2: // Área
    if (areaCarta1 > 0 && areaCarta2 > 0) {
      printf("Atributo 1 escolhido: 2 - Área\n");
      resultado1 = areaCarta1 > areaCarta2 ? 1 : 0;
      valorAtributo1Carta1 = areaCarta1;
      valorAtributo1Carta2 = areaCarta2;

    } else {
      printf("Atributo Área não cadastrado em ambas as cartas.\n");
      return 0;
      }
    break;

    case 3: // PIB
    if (pibCarta1 > 0 && pibCarta2 > 0) {
      printf("Atributo 1 escolhido: 3 - PIB\n");
      resultado1 = pibCarta1 > pibCarta2 ? 1 : 0;
      valorAtributo1Carta1 = pibCarta1;
      valorAtributo1Carta2 = pibCarta2;

    } else {
        printf("Atributo PIB não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;

    case 4: // Pontos Turísticos
    if (pontosTurCarta1 > 0 && pontosTurCarta2 > 0){
      printf("Atributo 1 escolhido: 4 - Pontos Turísticos\n");
      resultado1 = pontosTurCarta1 > pontosTurCarta2 ? 1 : 0;
      valorAtributo1Carta1 = pontosTurCarta1;
      valorAtributo1Carta2 = pontosTurCarta2;

    } else {
        printf("Atributo Pontos Turísticos não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;

    case 5: // PIB per Capita
    if (pibPerCapita1 > 0 && pibPerCapita2 > 0) {
      printf("Atributo 1 escolhido: 5 - PIB per Capita\n");
      resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
      valorAtributo1Carta1 = pibPerCapita1;
      valorAtributo1Carta2 = pibPerCapita2;

    } else {
        printf("Atributo PIB per Capita não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;

    case 6: // Densidade Populacional - regra reversa
    if (densidade1 > 0 && densidade2 > 0) {
      printf("Atributo 1 escolhido: 6 - Densidade Populacional\n");
      resultado1 = densidade1 < densidade2 ? 1 : 0; // Regra reversa: menor densidade vence
      valorAtributo1Carta1 = densidade1;
      valorAtributo1Carta2 = densidade2;

    } else {
        printf("Atributo Densidade Populacional não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;

    case 7: // Super Poder
    if (superPoder1 > 0 && superPoder2 > 0) {
      printf("Atributo 1 escolhido: 7 - Super Poder\n");
      resultado1 = superPoder1 > superPoder2 ? 1 : 0;
      valorAtributo1Carta1 = superPoder1;
      valorAtributo1Carta2 = superPoder2;

    } else {
        printf("Atributo Super Poder não cadastrado em ambas as cartas.\n");
        return 0;
      } 
    break;

    default:
      printf("Atributo inválido! Por favor, escolha um número entre 1 e 7.\n");
      break;
    }

    switch (atributoEscolhido2) { // Segundo switch para comparar o segundo atributo escolhido pelo usuário no menu interativo.
    case 1: // População
    if (populacaoCarta1 > 0 && populacaoCarta2 > 0) {
      printf("Atributo 2 escolhido: 1 - População\n");
      printf("=================================================\n");
      resultado2 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
      valorAtributo2Carta1 = populacaoCarta1;
      valorAtributo2Carta2 = populacaoCarta2;

    } else {
      printf("Atributo População não cadastrado em ambas as cartas.\n");
      return 0;
      }
    break;
    case 2: // Área
    if (areaCarta1 > 0 && areaCarta2 > 0) {
      printf("Atributo 2 escolhido: 2 - Área\n");
      printf("=================================================\n");
      resultado2 = areaCarta1 > areaCarta2 ? 1 : 0;
      valorAtributo2Carta1 = areaCarta1;
      valorAtributo2Carta2 = areaCarta2;

    } else {
      printf("Atributo Área não cadastrado em ambas as cartas.\n");
      return 0;
      }
    break;
    case 3: // PIB  
    if (pibCarta1 > 0 && pibCarta2 > 0) {
      printf("Atributo 2 escolhido: 3 - PIB\n");
      printf("=================================================\n");
      resultado2 = pibCarta1 > pibCarta2 ? 1 : 0;
      valorAtributo2Carta1 = pibCarta1;
      valorAtributo2Carta2 = pibCarta2;

    } else {
        printf("Atributo PIB não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;
    case 4: // Pontos Turísticos
    if (pontosTurCarta1 > 0 && pontosTurCarta2 > 0){
      printf("Atributo 2 escolhido: 4 - Pontos Turísticos\n");
      printf("=================================================\n");
      resultado2 = pontosTurCarta1 > pontosTurCarta2 ? 1 : 0;
      valorAtributo2Carta1 = pontosTurCarta1;
      valorAtributo2Carta2 = pontosTurCarta2;

    } else {
        printf("Atributo Pontos Turísticos não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;
    case 5: // PIB per Capita
    if (pibPerCapita1 > 0 && pibPerCapita2 > 0) {
      printf("Atributo 2 escolhido: 5 - PIB per Capita\n");
      printf("=================================================\n");
      resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
      valorAtributo2Carta1 = pibPerCapita1;
      valorAtributo2Carta2 = pibPerCapita2;

    } else {
        printf("Atributo PIB per Capita não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;
    case 6: // Densidade Populacional - regra reversa
    if (densidade1 > 0 && densidade2 > 0) {
      printf("Atributo 2 escolhido: 6 - Densidade Populacional\n");
      printf("=================================================\n");
      resultado2 = densidade1 < densidade2 ? 1 : 0; // Regra reversa: menor densidade vence
      valorAtributo2Carta1 = densidade1;
      valorAtributo2Carta2 = densidade2;

    } else {
        printf("Atributo Densidade Populacional não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;
    case 7: // Super Poder
    if (superPoder1 > 0 && superPoder2 > 0) {
      printf("Atributo 2 escolhido: 7 - Super Poder\n");
      printf("=================================================\n");
      resultado2 = superPoder1 > superPoder2 ? 1 : 0;
      valorAtributo2Carta1 = superPoder1;
      valorAtributo2Carta2 = superPoder2;

    } else {
        printf("Atributo Super Poder não cadastrado em ambas as cartas.\n");
        return 0;
      }
    break;
    default:
      printf("Atributo inválido! Por favor, escolha um número entre 1 e 7.\n");
      break;
      
    }
  }

  

  // Soma dos atributos escolhidos
  somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
  somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;
  

  // Exibição dos resultados detalhados
  printf("Pontuação Atributo 1:- Carta 1: %.2f\n", valorAtributo1Carta1);
  printf("Pontuação Atributo 1:- Carta 2: %.2f\n", valorAtributo1Carta2);
  printf("=================================================\n");
  printf("Pontuação Atributo 2:- Carta 1: %.2f\n", valorAtributo2Carta1);
  printf("Pontuação Atributo 2:- Carta 2: %.2f\n", valorAtributo2Carta2);
  printf("=================================================\n");
  printf("Soma dos Atributos - Carta 1: %.2f\n", somaCarta1);
  printf("Soma dos Atributos - Carta 2: %.2f\n", somaCarta2);
  printf("=================================================\n");

  // Determinação do vencedor final de acordo com o resultado do operador ternário
  if (resultado1 && resultado2) {
    printf("RESULTADO: Carta 1 venceu em ambos os atributos!\n");
  } else if (!resultado1 && !resultado2) {
    printf("RESULTADO: Carta 2 venceu em ambos os atributos!\n");
  } else {
    printf("RESULTADO: Empate!\n");
  }

    // Bloco de código para exibir ao usuário as cartas cadastradas.
    printf("=================================================\n");
    printf("\nCONFIRA AS CARTAS CADASTRADAS:\n");  
    //Exibição da Carta 1.
    printf("\n###### CARTA 1: ######\n");
    printf("ESTADO: %c\n", estadoCarta1);
    printf("CÓDIGO DA CARTA: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidadeCarta1);
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
    printf("POPULAÇÃO: %lu\n", populacaoCarta2);
    printf("ÁREA (km²): %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("PONTOS TURÍSTICOS: %d\n", pontosTurCarta2);
    printf("DENSIDADE POPULACIONAL: %.4f \n", densidade2);
    printf("PIB PER CAPITA: %.4f \n", pibPerCapita2);
    printf("SUPER PODER: %.2f \n", superPoder2); 
  
  return 0;
}