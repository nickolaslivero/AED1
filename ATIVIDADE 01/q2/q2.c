/*
    Nome: Nickolas Javier Santos Livero
    Matricula: 2115310042
*/

#include <stdio.h>

int main(int argc, char** argv) {
    float vetor[10];
    int i;

    printf("Digite 10 números reais:\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nValores digitados em ordem inversa:\n");

    for (i = 9; i >= 0; i--) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
