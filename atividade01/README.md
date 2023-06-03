01 - Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.

02 - Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

03 - Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

04 - Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.

05 - Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.

06 - Dadas duas matrizes reais A[m,n] e B[n,p], calcular o produto de A por B.

07 - Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais. Dada uma matriz quadrada A[n,n] , verificar se A é um quadrado mágico.

08 - Faça um paralelo sobre o conceito de ponteiros e os vetores (estáticos)

09 - Explique porquê os ponteiros ajudam o desenvolvimento de aplicações que otimizam o espaço da memória

10 - Qual a relação entre os ponteiros e uma String? Explique e dê exemplos.

11 - “Um vetor é essencialmente um ponteiro” – Você concorda com essa afirmação? explique

12 - Imagine que você definiu um vetor chamado “vetor” e seus elementos são inteiros e cada um ocupa 8 bytes da sua memória. Se o endereço de vetor[0] é 85800, qual o valor da expressão vetor + 6?  

13 - Suponha que v é um vetor. Descreva o porquê existe uma diferença entre escrever v[3] e v + 3

14 - O código abaixo contém a declaração de algumas variáveis e ponteiros. Quando você executa esse código os valores x, y e Pserão os valores de x, y e p ao final do trecho de código abaixo?

void main() {
   int x, y, *p; y = 0;
   p = &y;
   x = *p;
   x = 4;
   (*p)++;
   --x;
   (*p) += x;
}

15 - Escreva um programa que receba dois structs do tipo dma,cada um representando uma data válida, e calcule o número  de dias que decorreram entre as duas datas.

struct dma
{
    int dia;
    int mes;
    int ano;
};