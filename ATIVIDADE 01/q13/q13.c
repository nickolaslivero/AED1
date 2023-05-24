#include <stdio.h>

int main() {
    int v[] = {10, 20, 30, 40, 50};

    // Exemplo com v[3]
    int valor = v[3];
    printf("Valor de v[3]: %d\n", valor);

    // Exemplo com v + 3
    int* endereco = v + 3;
    printf("Endereço de v[3]: %p\n", (void*)endereco);

    return 0;
}
