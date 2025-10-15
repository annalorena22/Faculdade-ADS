#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Digite o tipo de comparação (M/N/I): ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (1-100): ");
    scanf("%d", &numeroJogador);

    // Exibir número do computador
    printf("Número do computador: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
      printf("Você escolheu Maior.\n");
      resultado = (numeroJogador > numeroComputador) ? 1 : 0;
      printf("O número do computador é %d e o seu número é %d.\n", numeroComputador, numeroJogador);
      break;

    case 'N':
    case 'n':
      printf("Você escolheu Menor.\n");
      resultado = (numeroJogador < numeroComputador) ? 1 : 0;
      printf("O número do computador é %d e o seu número é %d.\n", numeroComputador, numeroJogador);
      break;

    case 'I':
    case 'i':
      printf("Você escolheu Igual.\n");
      resultado = (numeroJogador == numeroComputador) ? 1 : 0;
      printf("O número do computador é %d e o seu número é %d.\n", numeroComputador, numeroJogador);
      break;

    default:
      printf("Opção inválida! Use M, N ou I.\n");
      break;
    }

    if (resultado == 1) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Que pena! Você perdeu.\n");
    }

}