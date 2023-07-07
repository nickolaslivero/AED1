/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Nickolas Javier Santos Livero
   Matrícula: 2115310042
*/

#include <stdio.h>
#include <stdlib.h>

struct no
{
    int dado;
    struct no* prox;
};

typedef struct no No;

No* criar()
{
    return NULL;
}

No* adicionar_inicio(No* lista, int dado)
{
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: Não foi possível alocar memória para o novo nó.\n");
        exit(EXIT_FAILURE);
    }
    novo->dado = dado;
    novo->prox = lista;

    return novo;
}

No* adicionar_fim(No* lista, int dado)
{
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: Não foi possível alocar memória para o novo nó.\n");
        exit(EXIT_FAILURE);
    }
    novo->dado = dado;
    novo->prox = NULL;

    if (lista == NULL) {
        return novo;
    }

    No* temp = lista;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    temp->prox = novo;

    return lista;
}

No* excluir_inicio(No* lista)
{
    if (lista == NULL) {
        printf("Erro: Lista vazia.\n");
        return NULL;
    }

    No* temp = lista;
    lista = lista->prox;

    temp->prox = NULL;
    free(temp);

    return lista;
}

No* excluir_fim(No* lista)
{
    if (lista == NULL) {
        printf("Erro: Lista vazia.\n");
        return NULL;
    }

    if (lista->prox == NULL) {
        free(lista);
        return NULL;
    }

    No* temp = lista;
    No* anterior = NULL;
    while (temp->prox != NULL) {
        anterior = temp;
        temp = temp->prox;
    }
    anterior->prox = NULL;
    free(temp);

    return lista;
}

void imprimir(No* lista)
{
    No* temp = lista;

    while (temp != NULL)
    {
        printf("%d ", temp->dado);
        temp = temp->prox;
    }

    printf("\n");
}

int buscar(No* lista, int dado)
{
    No* temp = lista;

    while (temp != NULL)
    {
        if (temp->dado == dado)
            return 1;

        temp = temp->prox;
    }

    return 0;
}

