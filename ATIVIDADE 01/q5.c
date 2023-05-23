#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    int numeros[TAMANHO_VETOR];
    int par[TAMANHO_VETOR];
    int impar[TAMANHO_VETOR];
    int i;
    int indicePar = 0;
    int indiceImpar = 0;

    printf("Digite 20 números inteiros:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            par[indicePar] = numeros[i];
            indicePar++;
        } else {
            impar[indiceImpar] = numeros[i];
            indiceImpar++;
        }
    }

    printf("\nNúmeros digitados:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nNúmeros pares:\n");
    for (i = 0; i < indicePar; i++) {
        printf("%d ", par[i]);
    }

    printf("\n\nNúmeros ímpares:\n");
    for (i = 0; i < indiceImpar; i++) {
        printf("%d ", impar[i]);
    }

    printf("\n");

    return 0;
}
