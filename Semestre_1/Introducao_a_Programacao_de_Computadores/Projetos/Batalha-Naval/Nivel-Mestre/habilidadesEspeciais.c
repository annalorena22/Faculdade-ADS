#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define QUANTIDADE_NAVIOS 4

#define AGUA '0'
#define NAVIO '3'
#define CONE '5'
#define CRUZ '6'
#define OCTAEDRO '7'

#define HORIZONTAL 1
#define VERTICAL 2
#define DIAGONAL_1 3
#define DIAGONAL_2 4

#define TAMANHO_HABILIDADE 5 // tamanho das matrizes de habilidade (5x5)

// Função para lógica de construção de matriz de cone
void construirCone(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
{
  // Uso de for para percorrer linhas e colunas da matriz
  for (int i = 0; i < TAMANHO_HABILIDADE; i++)
  {
    for (int j = 0; j < TAMANHO_HABILIDADE; j++)
    {
      // Uso de estrutura condicional para a construção do cone
      if (i == 0 && j == 2)
        matriz[i][j] = 1;
      else if (i == 1 && j >= 1 && j <= 3)
        matriz[i][j] = 1;
      else if (i == 2 && j >= 0 && j <= 4)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
}

// Função para lógica de construção de matriz de cruz
void construirCruz(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
{
  // Uso de for para percorrer linhas e colunas da matriz
  for (int i = 0; i < TAMANHO_HABILIDADE; i++)
  {
    for (int j = 0; j < TAMANHO_HABILIDADE; j++)
    {
      // Uso de estrutura condicional para a construção da cruz
      if ((i == 1 && j == 2) || (i == 2) || (i == 3 && j == 2))
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
}

// Função para lógica de construção de matriz de octaedro
void construirOctaedro(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
{
  // Uso de for para percorrer linhas e colunas da matriz
  for (int i = 0; i < TAMANHO_HABILIDADE; i++)
  {
    for (int j = 0; j < TAMANHO_HABILIDADE; j++)
    {
      // Uso de estrutura condicional para a construção do octaedro
      if ((i == 0 && j == 2) || (i == 1 && j >= 1 && j <= 3) || (i == 2 && j == 2))
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
}

// Uso de função para aplicar a habilidade no tabuleiro
void aplicarHabilidade(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                       int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE],
                       int origemLinha, int origemColuna, // Variáveis que armazenarão as coordenadas de onde a habilidade deve cair (o ponto central da habilidade)
                       char simboloEfeito)                // Simbolo que será colocado no tabuleiro (CONE=5, CRUZ=6, OCTAEDRO=7)
{
  int meio = TAMANHO_HABILIDADE / 2; // Variável para definir o ponto central da habilidade no tabuleiro
  // Uso de for para percorrer a matriz de habilidade
  for (int i = 0; i < TAMANHO_HABILIDADE; i++)
  {
    for (int j = 0; j < TAMANHO_HABILIDADE; j++)
    {
      if (habilidade[i][j] == 1) //Identifica a area da habilidade
      {
        int linha = origemLinha - meio + i; // (origemLinha - meio) define o ponto de PARTIDA (canto superior) do desenho no tabuleiro. E (+ i) move o desenho a partir desse ponto de partida para a linha atual da matriz de habilidade.
        int coluna = origemColuna - meio + j; // (origemColuna - meio) define o ponto de PARTIDA (canto esquerdo) do desenho no tabuleiro. E (+ j) move o desenho a partir desse ponto de partida para a coluna atual da matriz de habilidade
        
        // Validação da posição atual do segmento do navio para saber se está dentro dos limites do tabuleiro
        if (linha >= 0 && linha < TAMANHO_TABULEIRO &&
            coluna >= 0 && coluna < TAMANHO_TABULEIRO)
        {
          tabuleiro[linha][coluna] = simboloEfeito;
        }
        else
        {
          printf("HABILIDADE FALHOU!\n");
        }
      }
    }
  }
}

// Exibe o tabuleiro no console
void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], char titulo[]) // Uso de variável de vetor para titulos)
{
  char letras[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  printf("\n================================================\n");
  printf("%s\n", titulo);
  printf("================================================\n");

  printf("   ");
  for (int c = 0; c < TAMANHO_TABULEIRO; c++)
    printf("%c ", letras[c]);
  printf("\n");

  for (int l = 0; l < TAMANHO_TABULEIRO; l++)
  {
    printf("%2d ", l + 1);
    for (int c = 0; c < TAMANHO_TABULEIRO; c++)
      printf("%c ", tabuleiro[l][c]);
    printf("\n");
  }
}

// Função para exibir as habilidades individualmente
void exibirMatrizHabilidade(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE], char nome[])
{
  printf("\nHabilidade: %s\n", nome);
  for (int i = 0; i < TAMANHO_HABILIDADE; i++)
  {
    for (int j = 0; j < TAMANHO_HABILIDADE; j++)
      printf("%d ", matriz[i][j]);
    printf("\n");
  }
  printf("\n================================================\n");
}


int main()
{
  // Declaração de variáveis para o tabuleiro
  char matrizTabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

  // Uso de for para inicializar o tabuleiro com água
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
      matrizTabuleiro[i][j] = AGUA;

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

  // Exibição tabuleiro antes das habilidades
  exibirTabuleiro(matrizTabuleiro, "TABULEIRO INICIAL (SOMENTE NAVIOS)");

  // Cria as habilidades (5x5)
  int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
  int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
  int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];

  // Construção das habilidades
  construirCone(cone);
  construirCruz(cruz);
  construirOctaedro(octaedro);

  // Exibição das matrizes de habilidades individualmente
  exibirMatrizHabilidade(cone, "CONE");
  exibirMatrizHabilidade(cruz, "CRUZ");
  exibirMatrizHabilidade(octaedro, "OCTAEDRO");

  // Define origens das habilidades
  int origemConeL = 2, origemConeC = 5;
  int origemCruzL = 6, origemCruzC = 2;
  int origemOctaL = 7, origemOctaC = 7;

  // Aplica cada habilidade com seu símbolo específico
  aplicarHabilidade(matrizTabuleiro, cone, origemConeL, origemConeC, CONE);
  aplicarHabilidade(matrizTabuleiro, cruz, origemCruzL, origemCruzC, CRUZ);
  aplicarHabilidade(matrizTabuleiro, octaedro, origemOctaL, origemOctaC, OCTAEDRO);

  // Exibição do tabuleiro final
  exibirTabuleiro(matrizTabuleiro, "TABULEIRO APÓS HABILIDADES");

  // Legenda
  printf("\nLegenda:\n");
  printf("%c = Água\n", AGUA);
  printf("%c = Navio\n", NAVIO);
  printf("%c = Cone\n", CONE);
  printf("%c = Cruz\n", CRUZ);
  printf("%c = Octaedro\n", OCTAEDRO);

  return 0;
}
