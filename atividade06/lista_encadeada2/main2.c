#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada2.h"

int main(int argc, char *argv[]) {
    No *lista = criar();

    FILE *arquivo = fopen("1000.txt", "r");
    if (arquivo == NULL) {
        return 1;
    }

    int elemento;
    while (fscanf(arquivo, "%d", &elemento) == 1) {
        lista = inserir(lista, elemento);
    }

    fclose(arquivo);

    for (int i = 0; i < 500; i++) {
        lista = excluir_elemento(lista, 500);
    }

    imprimir(lista);

    return 0;
}
