#include <stdio.h>  

int main()
{
  float temperatura, umidade;
  unsigned int nivelEstoque, estoqueMinimo = 1000;

  printf("Digite a temperatura (em graus Celsius): \n");
  scanf("%f", &temperatura);

  printf("Digite a umidade (em porcentagem): \n");
  scanf("%f", &umidade);

  printf("Digite o nível de estoque (em unidades): \n");
  scanf("%u", &nivelEstoque);

  printf("\n Analisando os dados informados...\n");
  printf("\nTemperatura: %.2f °C\n", temperatura);
  printf("Umidade: %.2f %%\n", umidade);  
  printf("Nível de Estoque: %u unidades\n", nivelEstoque);

  if (temperatura > 30) {
    printf("Temperatura alta!\n");
  } else {
    printf("Temperatura está dentro dos parâmetros seguros.\n");
  }

  if (umidade > 50) {
    printf("Umidade alta!\n");
  } else {
    printf("Umidade está dentro dos parâmetros seguros.\n");
  }

  if (nivelEstoque < estoqueMinimo) {
    printf("Nível de estoque abaixo do mínimo!\n");
  } else {
    printf("Nível de estoque está dentro dos parâmetros seguros.\n");
  }

  return 0;
}
