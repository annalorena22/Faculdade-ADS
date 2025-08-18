#include <stdio.h>

int main() {
  int idade = 25;
  float altura = 1.75;
  char opcao = 'S';
  char nome[20] = "sergio";

  printf("Digite o nome: ");
  scanf("%s", nome);
  printf("O seu nome é: %s\n", nome);
  printf("Digite a idade: ");
  scanf("%d", &idade);
  printf("A sua idade é: %d\n", idade);
  printf("Digite a altura: ");
  scanf("%f", &altura);
  printf("A altura é: %.2f\n", altura);
  printf("Digite a opção (S/N): ");
  scanf(" %c", &opcao);
  printf("A opção é: %c\n", opcao);
}

/*

printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);

Principais especificadores de formato:

  %d: Imprime um inteiro no formato decimal.
  %i: Equivalente a %d.
  %f: Imprime um número de ponto flutuante no formato padrão.
  %.2f: Imprime um número de ponto flutuante com duas casas decimais.
  %e: Imprime um número de ponto flutuante na notação científica.
  %c: Imprime um único caractere.
  %s: Imprime uma cadeia (string) de caracteres.

*/
 