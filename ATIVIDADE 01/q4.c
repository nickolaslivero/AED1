#include <stdio.h>

#define NUM_ALUNOS 10

int main() {
    float notas[NUM_ALUNOS][4];
    float medias[NUM_ALUNOS];
    int alunosAprovados = 0;
    int i, j;

    printf("Digite as quatro notas de cada aluno:\n");

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;
        for (j = 0; j < 4; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / 4;
    }

    for (i = 0; i < NUM_ALUNOS; i++) {
        if (medias[i] >= 7.0) {
            alunosAprovados++;
        }
    }

    printf("\nNúmero de alunos com média maior ou igual a 7.0: %d\n", alunosAprovados);

    return 0;
}
