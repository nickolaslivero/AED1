#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    char* str = "Hello, World!";
    printf("%s\n", str);

    // Acesso aos caracteres da string usando ponteiros
    char* ptr = str;
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++; // movendo o ponteiro para o próximo caractere
    }
    printf("\n");

    // Manipulação de strings usando ponteiros
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, " "); // concatenando uma string usando strcat
    strcat(str1, str2);
    printf("%s\n", str1); // saída: "Hello World"

    // Alocação dinâmica de strings usando ponteiros
    char* dynamicStr;
    dynamicStr = (char*)malloc(10 * sizeof(char)); // alocando espaço para 10 caracteres
    strcpy(dynamicStr, "teste");
    printf("%s\n", dynamicStr); // saída: "teste"
    free(dynamicStr);

    return 0;
}
