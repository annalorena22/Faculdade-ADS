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
  printf("Saindo do jogo...\n");

  return 0;
}
