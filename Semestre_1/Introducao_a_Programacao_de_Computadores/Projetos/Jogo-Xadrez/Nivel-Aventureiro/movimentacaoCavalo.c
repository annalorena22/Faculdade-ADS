#include <stdio.h>

int main()
{

  printf("==================================\n");
  printf("Movimentação das Peças de Xadrez\n");
  printf("==================================\n");

  // MOVIMENTO DA TORRE (for)
  const int casasTorre = 5; // A Torre se move 5 casas para a direita
  printf("Torre se movimentou:\n");
  for (int i = 1; i <= casasTorre; i++)
  {
    printf("Direita\n");
  }

  printf("==================================\n");

  // MOVIMENTO DO BISPO (while)
  const int casasBispo = 5; // Bispo se move 5 casas na diagonal superior direita (cima, direita)
  int contadorBispo = 1;

  printf("Bispo se movimentou:\n");
  while (contadorBispo <= casasBispo)
  {
    printf("Cima, Direita\n");
    contadorBispo++;
  }

  printf("==================================\n");

  // MOVIMENTO DA RAINHA (do-while)
  const int casasRainha = 8; // A Rainha se move 8 casas para a esquerda
  int contadorRainha = 1;
  printf("Rainha se movimentou:\n");
  do
  {
    printf("Esquerda\n");
    contadorRainha++;
  } while (contadorRainha <= casasRainha);

  printf("==================================\n");

  // MOVIMENTO DO CAVALO (loops aninhados)
  const int movimentoBaixo = 2;    // Duas casas para baixo
  const int movimentoEsquerda = 1;  // Uma casa para esquerda
  printf("Cavalo se movimentou:\n");

  for (int i = 0; i < movimentoEsquerda; i++) { // Loop externo: controla o movimento horizontal (para esquerda)
    int contadorBaixo = 0; // Variável para contar os movimentos para baixo

    while (contadorBaixo < movimentoBaixo) { // Loop interno: controla o movimento vertical (para baixo)
      printf("Baixo\n");
      contadorBaixo++;
    }
    
    printf("Esquerda\n"); // Após descer duas vezes, move uma vez para a esquerda
  }

  printf("==================================\n");
  printf("Saindo do jogo...\n");

  return 0;
}
