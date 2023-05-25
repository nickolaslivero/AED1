/*
    Nome: Nickolas Javier Santos Livero
    Matricula: 2115310042
*/

#include <stdio.h>
#include "utils.c"

int main(int argc, char** argv){
    struct dma data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferencaDias = calcularDiferencaDias(data1, data2);

    printf("Número de dias entre as duas datas: %d\n", diferencaDias);

    return 0;
}
