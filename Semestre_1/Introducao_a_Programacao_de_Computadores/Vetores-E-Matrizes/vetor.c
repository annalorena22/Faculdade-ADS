#include <stdio.h>

int main() {
    float notas[3] = {85.5, 90.0, 78.3};
    
    printf("Notas dos alunos:\n");
    printf("Aluno 1: %.2f\n", notas[0]);
    printf("Aluno 2: %.2f\n", notas[1]);
    printf("Aluno 3: %.2f\n", notas[2]);

    return 0;
}