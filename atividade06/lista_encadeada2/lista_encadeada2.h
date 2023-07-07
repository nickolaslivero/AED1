/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Nickolas Javier Santos Livero
   Matrícula: 2115310042
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no No;

struct no
{
	int dado;
	No* prox;
};

/*--------------------------------------------------------------------------*/
No* criar()
{
	return NULL;
}

/*--------------------------------------------------------------------------*/
No* inserir( No *lista, int dado )
{
	No *novo;

	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;
	novo->prox = lista;
	
	return novo;
}

/*--------------------------------------------------------------------------*/
No* excluir( No *lista )
{
	No *temp;

    temp = lista;
    lista = lista->prox;
	
	temp->prox = NULL;
    free(temp);

	return lista;

}

/*--------------------------------------------------------------------------*/
void imprimir( No *lista )
{
	No *temp;

	temp = lista;
	
	while( temp != NULL )
	{
		printf( "%d ", temp->dado );
		temp = temp->prox;
	}
	
	printf("\n");
}

/*--------------------------------------------------------------------------*/
int buscar( No *lista, int dado )
{
	No *temp;

	temp = lista;
	
	while( temp != NULL )
	{
		if (temp->dado == dado)
			return 1;

		temp = temp->prox;
	}
	
	return 0;
}

/*--------------------------------------------------------------------------*/

No* excluir_elemento(No* lista, int dado)
{
    if (lista == NULL) {
        return NULL;
    }

    No* atual = lista;
    No* anterior = NULL;

    if (atual != NULL && atual->dado == dado) {
        lista = atual->prox;
        free(atual);
        return lista;
    }

    while (atual != NULL && atual->dado != dado) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        anterior->prox = atual->prox;
        free(atual);
    }

    return lista;
}
