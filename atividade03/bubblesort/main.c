/*
    Nome:   Nickolas Javier Santos Livero
    Mat:    2115310042
    
    Bubblesort
*/

#include <stdio.h>
#include "bubblesort.c"

int main(int argc, char** argv)
{
    char name[] = "nova100.txt";
    FILE *arquivo = fopen(name, "w");
    int i;
    int size = 100;
    int list[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }

    bubbleSort(list, size);

    freopen(name, "w", stdout);

    for (i = 0; i < size; i++) {
        printf("\n%d ", list[i]);
    }

    fclose(arquivo);

    return 0;
}
