#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int escolhaUsuario, escolhaComputador;
  srand(time(0)); // Inicializa o gerador de números aleatórios

  printf("***Bem-vindo ao Jokenpô***\n");
  printf("Escolha sua jogada:\n");
  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  printf("Digite o número da sua escolha: ");
  scanf("%d", &escolhaUsuario);

  escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

  switch (escolhaUsuario)
  {
  case 1:
    printf("Usuário:Você escolheu Pedra.\n");
    break;
  case 2:
    printf("Usuário: Você escolheu Papel.\n");
    break;
  case 3:
    printf("Usuário: Você escolheu Tesoura.\n");
    break;
  default:
    printf("Escolha inválida! Por favor, escolha 1, 2 ou 3.\n");
    break;
  }

  switch (escolhaComputador)
  {
  case 1:
    printf("Computador: Você escolheu Pedra.\n");
    break;
  case 2:
    printf("Computador: Você escolheu Papel.\n");
    break;
  case 3:
    printf("Computador: Você escolheu Tesoura.\n");
    break;
  }

  // Lógica do jogo
  if (escolhaUsuario == escolhaComputador)
  {
    printf("Empate!\n");
  }
  else if ((escolhaUsuario == 1 && escolhaComputador == 3) ||
           (escolhaUsuario == 2 && escolhaComputador == 1) ||
           (escolhaUsuario == 3 && escolhaComputador == 2))
  {
    printf("Você venceu!\n");
  }
  else
  {
    printf("Você perdeu!\n");
  }

  return 0;
}