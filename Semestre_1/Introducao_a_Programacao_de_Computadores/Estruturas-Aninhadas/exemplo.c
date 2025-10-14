#include <stdio.h>  

int main () {
  int idade, dependentes;
  float renda;

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade < 18 || idade >= 60) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  }  else {
    printf("Recusado em relação a idade.\n");
  }
}