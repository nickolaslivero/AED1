/*
    Nome: Nickolas Javier Santos Livero
    Matricula: 2115310042
*/

#include <stdio.h>

int main(int argc, char** argv) {
    float notas[4];
    float soma = 0;
    float media;
    int i;

    printf("Digite as 4 notas:\n");

    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("\nNotas digitadas:\n");

    for (i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    media = soma / 4;

    printf("\nMédia: %.2f\n", media);

    return 0;
}
