#include <stdio.h>

int main() {
    int idade; // numeros inteiros. ex: 25
    int quantidade = 1; // numeros inteiros. ex: 10
    float altura = 1.75; // numeros flutuantes. valores menores. ex: 1.75
    double peso = 70.5; // numeros reais. valores maiores. ex: 70.5
    char letra = 'A'; // caracteres. ex: 'A'
    char nome[20] = "João"; // strings. ex: "João"

    idade = 25; // declarando um valor para idade posteriormente

    quantidade = 10; // alterando o valor declarado anteriormente

    printf("A idade é: %d\n", idade);
    printf("A quantidade é: %d\n", quantidade);
    printf("A altura é: %.2f\n", altura);
    printf("O peso é: %.2lf\n", peso);
    printf("A letra é: %c\n", letra);
    printf("O nome é: %s\n", nome);
}