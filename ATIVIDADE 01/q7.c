#include <stdio.h>

#define MAX_N 100

int verificarQuadradoMagico(int A[MAX_N][MAX_N], int n) {
    int i, j;
    int somaPrincipal = 0;
    int somaSecundaria = 0;
    int somaLinha, somaColuna;

    for (i = 0; i < n; i++) {
        somaPrincipal += A[i][i];
        somaSecundaria += A[i][n - i - 1];
    }

    if (somaPrincipal != somaSecundaria) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        somaLinha = 0;
        somaColuna = 0;

        for (j = 0; j < n; j++) {
            somaLinha += A[i][j];
            somaColuna += A[j][i];
        }

        if (somaLinha != somaPrincipal || somaColuna != somaPrincipal) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int A[MAX_N][MAX_N];
    int n, i, j;

    printf("Digite a ordem da matriz quadrada (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int resultado = verificarQuadradoMagico(A, n);

    if (resultado) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
