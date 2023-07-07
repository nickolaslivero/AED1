/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Nickolas Javier Santos Livero
   Matrícula: 2115310042
*/

#include <stdio.h>
#include "lista_encadeada3.h"

int main(int argc, char *argv[]) {
    No* lista = criar();

    FILE* arquivo = fopen("1000.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int dado[1000];
    for (int i = 0; i < 1000; i++) {
        if (fscanf(arquivo, "%d", &dado[i]) != 1) {
            printf("Erro ao ler elemento do arquivo.\n");
            break;
        }
    }

    fclose(arquivo);

    for (int i = 0; i < 500; i++) {
        lista = adicionar_inicio(lista, dado[i]);
    }

    for (int i = 500; i < 1000; i++) {
        lista = adicionar_fim(lista, dado[i]); 
    }

    lista = excluir_inicio(lista);
    lista = excluir_fim(lista);
    imprimir(lista);


    return 0;
}
