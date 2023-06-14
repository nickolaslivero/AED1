/*
    Nome:   Nickolas Javier Santos Livero
    Mat:    2115310042
    
    Insertionsort
*/

#include <stdio.h>
#include <time.h>
#include "insertionsort.c"

int main(int argc, char *argv[])
{
    int i;
    int size;
    scanf("%d", &size);

    int list[size];
    double start, finish, elapsed;

    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }

    start = (double) clock() / CLOCKS_PER_SEC;

    insertionSort(list, size);

    finish = (double) clock() / CLOCKS_PER_SEC;

    elapsed = (double) finish - start;

    printf("%fs\n", elapsed);

    return 0;
}
