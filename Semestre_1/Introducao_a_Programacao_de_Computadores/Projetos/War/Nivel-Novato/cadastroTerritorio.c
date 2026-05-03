#include <stdio.h>
#include <string.h>

// Criação da struct Territorio com os campos nome, cor e tropas.
typedef struct
{
  char nome[30];
  char cor[10];
  int tropas;
} Territorio;

int main()
{
  // Criação de um vetor para armazenar os dados de 5 territórios.
  Territorio mapa[5];
  int i;

  printf("==========================================\n");
  printf("    CADASTRO DE TERRITORIOS - JOGO WAR    \n");
  printf("==========================================\n\n");

  // Laço for para entrada de dados dos 5 cadastros de territórios com campos nome, cor e tropas.
  for (i = 0; i < 5; i++)
  {
    printf("--- Territorio %d ---\n", i + 1); // Exibe o número do território atual (i + 1) para o usuário.

    printf("Digite o nome do territorio: ");
    scanf(" %s", mapa[i].nome); // Armazena o nome do território no campo nome.

    printf("Digite a cor do exercito: ");
    scanf(" %s", mapa[i].cor); // Armazena a cor do exército no campo cor.

    printf("Digite a quantidade de tropas: ");
    scanf("%d", &mapa[i].tropas); // Armazena a quantidade de tropas no campo tropas.

    printf("\n");
  }

  printf("==========================================\n");
  printf("       DADOS DOS TERRITORIOS CADASTRADOS   \n");
  printf("==========================================\n");

  // Laço for para exibir os dados dos 5 cadastros de territórios com campos nome, cor e tropas.
  for (i = 0; i < 5; i++)
  {
    // Exibe os dados do território acessando os campos nome, cor e tropas do vetor mapa.
    printf("%s | %s | %d\n", mapa[i].nome, mapa[i].cor, mapa[i].tropas);
  }

  printf("==========================================\n");

  return 0;
}