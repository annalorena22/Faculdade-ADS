#include <stdio.h>

int main() {
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // criança < 12;
    //Adolescente 12 <= x < 18;
    //Adulto 18 <= x < 6;
    //Idoso >= 60;

    if (idade < 12) {
        printf("Criança\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }


    return 0;
}