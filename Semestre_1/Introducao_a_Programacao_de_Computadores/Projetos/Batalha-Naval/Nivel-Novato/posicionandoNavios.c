#include <stdio.h>

int main()
{

  char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Letras para colunas do tabuleiro

  // Matriz para representar o tabuleiro
  int tabuleiro[10][10] = {
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
      {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}};

  const int tamanhoTabuleiro = 10; // Tamanho do tabuleiro 10x10
  const int tamanhoNavio = 3;      // Tamanho dos navios
  const char agua = '0';           // Representa água no tabuleiro
  const char navio = '3';          // Representa parte do navio no tabuleiro
  printf("================================================\n");
  printf("--- Posicionamento dos Navios ---\n");
  printf("================================================\n");
  // NAVIO 1: HORIZONTAL

  const int indiceNavio1Linha = 2;  // Linha 3 (Índice 2)
  const int indiceNavio1Coluna = 1; // Coluna 2 (Índice 1)
  printf("Navio 1 (Horizontal) posicionado:\n");
  for (int i = 0; i < tamanhoNavio; i++)
  { // Uso de for para posicionar os navios
    int indiceColunaAtual = indiceNavio1Coluna + i;

    // Valida se as posições a serem preenchidas não passam do tamanho do tabuleiro
    if (indiceColunaAtual < tamanhoTabuleiro)
    {
      tabuleiro[indiceNavio1Linha][indiceColunaAtual] = navio; // Coloca o valor '3' nas posições declaradas
      printf("Coordenadas: [%d][%d]\n", indiceNavio1Linha, indiceColunaAtual);
    }
  }

  printf("================================================\n");

  // NAVIO 2: VERTICAL
  const int indiceNavio2Linha = 5;  // Linha 6 (Índice 5)
  const int indiceNavio2Coluna = 7; // Coluna 8 (Índice 7)
  printf("Navio 2 (Vertical) posicionado:\n");
  for (int i = 0; i < tamanhoNavio; i++)
  {
    int indiceLinhaAtual = indiceNavio2Linha + i;

    // Valida se as posições a serem preenchidas não passam do tamanho do tabuleiro
    if (indiceLinhaAtual < tamanhoTabuleiro)
    {
      tabuleiro[indiceLinhaAtual][indiceNavio2Coluna] = navio;
      printf("Coordenadas: [%d][%d]\n", indiceLinhaAtual, indiceNavio2Coluna);
    }
  }

  printf("================================================\n");

  // Exibindo o tabuleiro
  printf("   "); // espaço para alinhar com números de 2 dígitos
  for (int j = 0; j < tamanhoTabuleiro; j++)
  {
    printf(" %c", letras[j]);
  }

  for (int i = 0; i < tamanhoTabuleiro; i++)
  {
    printf("\n%2d ", i + 1);
    for (int j = 0; j < tamanhoTabuleiro; j++)
    {
      printf(" %c", tabuleiro[i][j]);
    }
  }

  printf("\n");

  return 0;
}