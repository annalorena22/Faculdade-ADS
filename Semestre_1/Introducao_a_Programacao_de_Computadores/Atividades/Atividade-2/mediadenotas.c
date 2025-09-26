#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;

  printf("******CALCULE A MÉDIA DO ALUNO******\n");
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("A média é: %.1f\n", media);

  return 0;
}