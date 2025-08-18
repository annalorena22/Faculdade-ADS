/* Programa de gerenciamento de alunos */

#include <stdio.h>

int main() {
  int idade, matricula; // %d
  float altura; // %f
  char nome[50]; // %s

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite sua matrícula: ");
  scanf("%d", &matricula);
  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Nome do Aluno: %s - Matrícula: %d\n", nome, matricula);
  printf("Idade: %d - Altura: %.2f\n", idade, altura);


  return 0;
}
