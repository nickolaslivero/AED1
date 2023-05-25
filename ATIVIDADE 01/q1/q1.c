/*
    Nome: Nickolas Javier Santos Livero
    Matricula: 2115310042
*/

#include <stdio.h>

int main(int argc, char** argv) {
    int vetor[5];
    int i;

    printf("Digite 5 números inteiros:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
