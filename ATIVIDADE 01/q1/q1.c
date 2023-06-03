#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 números inteiros:\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}