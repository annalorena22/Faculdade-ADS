#include <stdio.h>

// Declaração de constantes para o tabuleiro
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA '0'
#define NAVIO '3'
#define QUANTIDADE_NAVIOS 4

// Declaração de constantes para direções dos navios
#define HORIZONTAL 1
#define VERTICAL 2
#define DIAGONAL_1 3 
#define DIAGONAL_2 4 

int main()
{
  // Declaração de variáveis para o tabuleiro
  char letras[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int matrizTabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

  // Uso de for para inicializar o tabuleiro com água
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
      matrizTabuleiro[i][j] = AGUA;
    }
  }

  // Uso de vetores para armazenar as posições iniciais e direções dos navios
  int posicaoInicialLinha[QUANTIDADE_NAVIOS] = {2, 5, 6, 0};
  int posicaoInicialColuna[QUANTIDADE_NAVIOS] = {1, 7, 0, 9};
  int direcaoDosNavios[QUANTIDADE_NAVIOS] = {HORIZONTAL, VERTICAL, DIAGONAL_1, DIAGONAL_2};

  
  int navio_segmento; // Variáveis para controle dos segmentos do navio
  int linha, coluna; // Variáveis usadas para exibição do tabuleiro

  // Uso de uma matriz para armazenar temporariamente as coordenadas válidas, sendo [tamanho do navio][linha, coluna]
  int coordenadasValidas[TAMANHO_NAVIO][2];

  // Uso de for para tentar posicionar cada navio
  for (int indiceNavioAtual = 0; indiceNavioAtual < QUANTIDADE_NAVIOS; indiceNavioAtual++)
  {
    int linhaInicio = posicaoInicialLinha[indiceNavioAtual]; // Linha inicial do navio
    int colunaInicio = posicaoInicialColuna[indiceNavioAtual]; // Coluna inicial do navio
    int direcaoNavio = direcaoDosNavios[indiceNavioAtual]; // Direção do navio atual
    int validacaoPosicionamento = 1; // Uso de booleano para controle de validação (1 = válido, 0 = inválido)

    int linhaPosicaoAtual, colunaPosicaoAtual; // Variáveis para calcular a posição atual do segmento do navio

    // Uso de for para verificar se cada segmento do navio ja nao está ocupado e se está dentro dos limites do tabuleiro
    for (navio_segmento = 0; navio_segmento < TAMANHO_NAVIO; navio_segmento++)
    {
      // Uso de estrutura condicional para calcular a posição atual do segmento do navio com base na direção
      if (direcaoNavio == HORIZONTAL) // Linha fixa, coluna varia
      {
        linhaPosicaoAtual = linhaInicio;
        colunaPosicaoAtual = colunaInicio + navio_segmento;
      }
      else if (direcaoNavio == VERTICAL) // Coluna fixa, linha varia
      {
        linhaPosicaoAtual = linhaInicio + navio_segmento;
        colunaPosicaoAtual = colunaInicio;
      }
      else if (direcaoNavio == DIAGONAL_1) // Linha e coluna variam positivamente
      {
        linhaPosicaoAtual = linhaInicio + navio_segmento;
        colunaPosicaoAtual = colunaInicio + navio_segmento;
      }
      else // DIAGONAL_2: Linha varia positivamente, coluna varia negativamente
      {
        linhaPosicaoAtual = linhaInicio + navio_segmento;
        colunaPosicaoAtual = colunaInicio - navio_segmento;
      }

      // Validação da posição atual do segmento do navio para saber se está dentro dos limites e se não está ocupada
      if (linhaPosicaoAtual < 0 || linhaPosicaoAtual >= TAMANHO_TABULEIRO ||
          colunaPosicaoAtual < 0 || colunaPosicaoAtual >= TAMANHO_TABULEIRO ||
          matrizTabuleiro[linhaPosicaoAtual][colunaPosicaoAtual] == NAVIO)
      {
        validacaoPosicionamento = 0; // Marca como inválido
        break; // Sai do loop ao falhar
      }

      // Se valido, armazena as coordenadas na matriz de coordenadas válidas
      coordenadasValidas[navio_segmento][0] = linhaPosicaoAtual;
      coordenadasValidas[navio_segmento][1] = colunaPosicaoAtual;
    }

    // Validação final do posicionamento do navio
    if (validacaoPosicionamento)
    {
      // Uso de for para posicionar o navio no tabuleiro
      for (navio_segmento = 0; navio_segmento < TAMANHO_NAVIO; navio_segmento++)
      {
        linha = coordenadasValidas[navio_segmento][0];
        coluna = coordenadasValidas[navio_segmento][1];
        matrizTabuleiro[linha][coluna] = NAVIO;
      }
    }
    else
    {
      printf("FALHA!\n");
    }
  } 

  printf("\n================================================\n");
  printf("--- Tabuleiro Final ---\n");
  printf("================================================\n");

  // Exibição do tabuleiro

  // Exibição das letras das colunas
  printf("   ");
  for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++)
  {
    printf("%c ", letras[coluna]);
  }
  printf("\n");

  // Exibição das linhas do tabuleiro
  for (linha = 0; linha < TAMANHO_TABULEIRO; linha++)
  {
    // Número da linha (linha + 1) com alinhamento de 2 dígitos
    printf("%2d ", linha + 1);
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++)
    {
      printf("%c ", (char)matrizTabuleiro[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}