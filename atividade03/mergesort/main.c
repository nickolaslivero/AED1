/*
    Nome:   Nickolas Javier Santos Livero
    Mat:    2115310042
    
    Mergesort
*/

#include <stdio.h>
#include <time.h>
#include "mergesort.c"

int main()
{
    int size;
    double start, finish, elapsed;

    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    start = (double) clock() / CLOCKS_PER_SEC;

    mergeSort(arr, 0, size - 1);

    finish = (double) clock() / CLOCKS_PER_SEC;
    elapsed = (double) finish - start;

    printf("%fs\n", elapsed);

    return 0;
}
