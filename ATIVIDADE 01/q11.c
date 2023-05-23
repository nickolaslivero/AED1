#include <stdio.h>

int main() {
    // Vetor
    int vetor[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]); // Acesso aos elementos usando índices
    }
    printf("\n\n");

    // Ponteiro
    int* ponteiro = vetor; // O nome do vetor é um ponteiro para o primeiro elemento

    printf("Ponteiro:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ponteiro + i)); // Acesso aos elementos usando aritmética de ponteiros
    }
    printf("\n\n");
    // Resposta: Não, são diferentes e dependem do seu propósito aplicável.
    return 0;
}
