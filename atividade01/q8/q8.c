#include <stdio.h>

/*
   Ponteiros e Vetores Estáticos

   - Vetores Estáticos:
     - Um vetor estático é uma coleção de elementos do mesmo tipo, onde cada elemento é acessado através de um índice inteiro.
     - Na declaração de um vetor estático, é especificado o tipo dos elementos e o número total de elementos que o vetor irá armazenar.
     - Os elementos de um vetor estático são armazenados em uma sequência contígua de memória.
     - O acesso aos elementos do vetor é feito utilizando o nome do vetor seguido pelo índice entre colchetes, por exemplo, vetor[indice].
     - Os elementos de um vetor estático são alocados em tempo de compilação e possuem um tamanho fixo.
     - A indexação de um vetor estático começa em 0 e vai até o número de elementos menos 1.

   - Ponteiros:
     - Um ponteiro é uma variável que armazena o endereço de memória de outro objeto.
     - Em C, os ponteiros podem ser usados para manipular e acessar indiretamente os dados na memória.
     - Um ponteiro é declarado especificando o tipo de dados que ele aponta. Por exemplo, int* ponteiro.
     - O operador de referência (&) é usado para obter o endereço de memória de uma variável. Por exemplo, &variavel.
     - O operador de desreferência (*) é usado para acessar o valor armazenado no endereço de memória apontado por um ponteiro. Por exemplo, *ponteiro.
     - Os ponteiros podem ser usados para criar e manipular vetores dinamicamente alocados na memória, por meio de funções como malloc e free.
     - Os ponteiros podem ser usados para percorrer e acessar os elementos de um vetor, permitindo uma manipulação mais flexível e eficiente.
*/

int main(int argc, char** argv)
{
    int vetor[5] = {1, 2, 3, 4, 5};  // Exemplo de vetor estático

    int* ponteiro;  // Exemplo de declaração de ponteiro

    ponteiro = &vetor[0];  // Atribuição do endereço do primeiro elemento do vetor ao ponteiro

    /*
       Utilizando o ponteiro para acessar e percorrer os elementos do vetor
       Imprime os elementos do vetor usando o ponteiro
    */
    
    printf("Elementos do vetor:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ponteiro);  // Acesso ao valor do elemento usando o operador de desreferência
        ponteiro++;  // Movendo o ponteiro para o próximo elemento
    }
    printf("\n");

    return 0;
}
