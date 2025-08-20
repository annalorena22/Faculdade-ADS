#include <stdio.h>

int main() {
    
    /*
    Atribuição simples ( = )
    Atribuição de Soma ( += )
    Atribuição de Subtração ( -= )
    Atribuição de Multiplicação ( *= )
    Atribuição de Divisão ( /= )
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // Atribuição de Soma ( += )
    // resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //Atribuição de Subtração ( -= )
    // resultado = resultado - numero1
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //Atribuição de Multiplicação ( *= )
    // resultado = resultado * 5
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    //Atribuição de Divisão ( /= )
    // resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);

    return 0;
}