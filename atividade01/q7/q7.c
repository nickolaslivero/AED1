/*
    Nome: Nickolas Javier Santos Livero
    Matricula: 2115310042
*/

#include <stdio.h>
#include "utils.c"

#define MAX_N 100

int main(int argc, char** argv)
{
    int A[MAX_N][MAX_N];
    int n, i, j;

    printf("Digite a ordem da matriz quadrada (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int resultado = verificarQuadradoMagico(A, n);

    if (resultado) 
    {
        printf("A matriz é um quadrado mágico.\n");
    } 
    else 
    {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
