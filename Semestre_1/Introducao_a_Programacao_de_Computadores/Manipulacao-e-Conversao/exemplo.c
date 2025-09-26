#include <stdio.h>

int main()
{

  //Conversão implícita
  int a = 10;
  float b = 3.5;

  float resultado = a + b; // Conversão implícita de int para float

  printf("Resultado: %.2f\n", resultado);

  //--------------------------------------

  // Conversão explícita (casting)
  int c = 10;
  int d = 3;
  float quociente = (float) c / d;  //casting(float) explícito de int para float

  printf("Quociente: %.2f\n", quociente);

  return 0;
}