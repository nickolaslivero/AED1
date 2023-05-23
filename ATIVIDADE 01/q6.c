#include <stdio.h>

#define MAX_M 100
#define MAX_N 100
#define MAX_P 100

void multiplicarMatrizes(float A[MAX_M][MAX_N], float B[MAX_N][MAX_P], float C[MAX_M][MAX_P], int m, int n, int p) {
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;

            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(float matriz[MAX_M][MAX_P], int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p;
    float A[MAX_M][MAX_N];
    float B[MAX_N][MAX_P];
    float C[MAX_M][MAX_P];
    int i, j;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    multiplicarMatrizes(A, B, C, m, n, p);

    printf("Resultado da multiplicação de A por B:\n");
    imprimirMatriz(C, m, p);

    return 0;
}
