void bubbleSort(int list[], int size)
{
    int i, j, aux, swap = 1;

    for (i = 0; (i < size) && (swap == 1); i++) {
        swap = 0;

        for (j = 0; j < size - i - 1; j++) {
            if (list[j] < list[j + 1]) {
                swap = 1;
                aux = list[j];
                list[j] = list[j + 1];
                list[j + 1] = aux;
            }
        }
    }
}
