#include <stdio.h>

int main() {
    
    /*
    Incremento (++)
    Pré-Incremento (++variavel)
    Pós-Incremento (variavel++)
    Decremento (variavel--)
    Pré-Decremento (--variavel)
    Pós-Decremento (variavel--)
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento %d\n", numero1);

    
    //Pós-Incremento
    // numero1 = numero1 + 1; exemplo 1
    // numero1 += 1; exemplo 2
    // resultado = numero1;
    // numero1++
    resultado = numero1++;
    printf("Após o Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-Incremento
    // resultado = ++numero1;
    // resultado = numero1(agora é 2) + 1;
    printf("Após o Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pós-Decremento
    // numero1 = numero1 - 1;
    // numero1 -= 1;
    resultado = numero1--;
    printf("Após do Pós-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    // resultado = numero1(agora é 1) - 1;

    //Pré-Decremento
    resultado = --numero1;
    printf("Após do Pré-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    return 0;
}