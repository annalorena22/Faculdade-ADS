#include <stdio.h>
int main()
{
  int numeroComSinal = 3000000000; // Valor maior que o limite máximo de um int (2147483647)
  unsigned int numeroSemSinal = 3000000000; // Valor dentro do limite

  printf("Número com sinal: %d\n", numeroComSinal);
  printf("Número sem sinal: %u\n", numeroSemSinal);

  int numeroNormal = 2147483647; // Limite máximo de um int
  long int numeroLongo = 2147483647; // Limite máximo de um long int (geralmente o mesmo que int em sistemas de 32 bits)
  long long int numeroMuitoLongo = 9223372036854775807; // Limite máximo de um long long int
  
  printf("Número normal (int): %d\n", numeroNormal);
  printf("Número longo (long int): %ld\n", numeroLongo);    
  printf("Número muito longo (long long int): %lld\n", numeroMuitoLongo);

  double numeroPreciso = 3.141592653589793; // Maior precisão
  long double numeroMuitoPreciso = 3.14159265358979323846; // Ainda mais precisão

  printf("Número preciso (double): %.15f\n", numeroPreciso);
  printf("Número muito preciso (long double): %.18Lf\n", numeroMuitoPreciso);

  unsigned long int numerograndePositivo = 4000000000;
  unsigned int numeroPositivo = 4000000000; 
  long int numeroGrande = 4000000000; 
  int numero = 4000000000; 
  printf("Número grande positivo (unsigned long int): %lu\n", numerograndePositivo);
  printf("Número positivo (unsigned int): %u\n", numeroPositivo);   
  printf("Número grande (long int): %ld\n", numeroGrande);
  printf("Número (int): %d\n", numero); // Pode causar comportamento indefinido

  short int numeroPequeno = 32767; // Limite máximo de um short int
  printf("Número pequeno (short int): %d\n", numeroPequeno);
  numeroPequeno = 32768; // Valor maior que o máximo de um short int
  printf("Número pequeno (short int) atualizado: %d\n", numeroPequeno); // Comportamento indefinido
  return 0;
}