#include <stdio.h>

// MOVIMENTO DA TORRE(recursividade)
void moverTorre(int casas) {
  if (casas > 0) {
    printf("Direita\n");  // Exibe o movimento da peça.
    moverTorre(casas - 1); // Move para a próxima casa.
  }
}

// MOVIMENTO DA RAINHA (recursividade)
void moverRainha(int casas) {
  if (casas > 0) {
    printf("Esquerda\n"); 
    moverRainha(casas - 1);
  }
}

// MOVIMENTO DO BISPO (recursividade)
void moverBispo(int casas) {
  if (casas > 0) {
    printf("Cima, Direita\n"); 
    moverBispo(casas - 1);
  }
}

int main()
{
  printf("==================================\n");
  printf("Movimentação das Peças de Xadrez\n");
  printf("==================================\n");

  // MOVIMENTO DA TORRE
  const int casasTorre = 5; //Define o número de casas que a Torre irá se mover para a direita
  printf("Torre se movimentou:\n");
  moverTorre(casasTorre);
  printf("==================================\n");

  // MOVIMENTO DO BISPO (loops aninhados)
    printf("Bispo se movimentou (Loops Aninhados):\n");
    const int casasBispo = 5; //Define o número de casas que o Bispo irá se mover na diagonal (cima e direita)
    // Loop externo (Vertical): controla as 5 iterações de Cima
    for (int i = 0; i < casasBispo; i++) { 
        // Loop interno (Horizontal): controla as 5 iterações de Direita (apenas 1 repetição por passo)
        for (int j = 0; j < 1; j++) { 
            printf("Cima, Direita\n"); 
        }
    }
  printf("\n");

  // MOVIMENTO DO BISPO (recursividade)
  printf("Bispo se movimentou (Recursividade):\n");
  moverBispo(casasBispo);
  printf("==================================\n");

  // MOVIMENTO DA RAINHA
  const int casasRainha = 8; //Define o número de casas que a Rainha irá se mover para a esquerda
  int contadorRainha = 1;
  printf("Rainha se movimentou:\n");
  moverRainha(casasRainha);
  printf("==================================\n");

  // MOVIMENTO DO CAVALO (loops aninhados)
  const int movimentoCima = 2;    // Duas casas para cima
  const int movimentoDireita = 1;  // Uma casa para direita
  printf("Cavalo se movimentou:\n");

  // Loop externo for com múltiplas variáveis para controlar o movimento vertical (2 casas para cima) e horizontal (1 casa para direita)
  for (int i = 0, j = 0; i < movimentoCima || j < movimentoDireita; i++, j++) {
    // Loop interno while para controlar o movimento vertical (2 casas para cima)
    int contadorCima = 0;   
    while (contadorCima < movimentoCima) {
      printf("Cima\n");
      contadorCima++;
    }
    
    printf("Direita\n"); // Movimento Horizontal (1 casa para Direita)
    
    break; // O 'break' (permitido no requisito) garante que o movimento "L" ocorra apenas uma vez.
  }

  printf("==================================\n");
  printf("Saindo do jogo...\n");

  return 0;
}
