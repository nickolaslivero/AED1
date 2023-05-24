#include <stdio.h>

int main() {
    int vetor[10];
    int* endereco_vetor = vetor;

    endereco_vetor[0] = 85800;

    int* endereco_vetor_6 = endereco_vetor + 6;

    printf("Endereço de vetor[6]: %p\n", (void*)endereco_vetor_6);

    return 0;
}
