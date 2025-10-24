#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{

  int matriz[LINHAS][COLUNAS];
  int target = 5;
  int found = 0;
  int soma = 1;

  // Inicialização da matriz
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      matriz[i][j] = soma; // Atribui o valor de 'soma' à posição (i, j)
      printf("%d ", matriz[i][j]);
      soma++; // Incrementa o valor para o próximo elemento
    }
    printf("\n");
  }

  // Busca condicional do elemento alvo
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {

      // Verifica se o valor na posição (i, j) é igual ao alvo
      if (matriz[i][j] == target)
      {
        printf("O valor %d encontrado na posição (%d, %d)\n", target, i, j);
        found = 1; // Marca como encontrado

        break; // Sai do loop interno (colunas)
      }
    }

    // Verifica se o elemento foi encontrado. Se sim, sai do loop externo (linhas)
    if (found)
      break;
  }

  // Se o loop terminou e 'found' ainda é 0, o elemento não foi encontrado
  if (!found)
  {
    printf("Elemento %d não encontrado na matriz\n", target);
  }

  return 0;
}