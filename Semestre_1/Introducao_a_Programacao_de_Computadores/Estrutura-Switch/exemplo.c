#include <stdio.h>

int main()
{
  int opcao;

  printf("Escolha uma opção de A a D:\n");
  printf("1 - Opção 1\n");
  printf("2 - Opção 2\n");
  printf("3 - Opção 3\n");
  printf("Digite sua escolha: ");
  scanf(" %d", &opcao);

  switch (opcao){
  case 1:
    printf("Você escolheu a Opção 1.\n");
  break;
  case 2:
    printf("Você escolheu a Opção 2.\n");
  break;
  case 3:
    printf("Você escolheu a Opção 3.\n");
  break;
  default:
    printf("Opção inválida. Por favor, escolha entre 1, 2 ou 3.\n");
  break;
  }

  return 0;
}