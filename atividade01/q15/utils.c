#include <stdio.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

int isAnoBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1; //bissexto
    } else {
        return 0; //não bissexto
    }
}

int numeroDiasMes(int mes, int ano) 
{
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && isAnoBissexto(ano)) {
        return 29; //fevereiro em ano bissexto tem 29 dias
    } else {
        return diasMes[mes - 1];
    }
}

int calcularDiferencaDias(struct dma data1, struct dma data2) 
{
    int totalDias = 0;

    //qual data mais antiga
    if (data1.ano < data2.ano || (data1.ano == data2.ano && data1.mes < data2.mes) ||
        (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia)) {
        //data1 mais antiga, calcula a diferença de dias entre as datas
        struct dma temp = data1;
        data1 = data2;
        data2 = temp;
    }

    //diferença de anos completos
    for (int ano = data1.ano; ano < data2.ano; ano++) 
    {
        if (isAnoBissexto(ano)) {
            totalDias += 366;
        } else {
            totalDias += 365;
        }
    }

    //diferença de meses incompletos no último ano
    for (int mes = 1; mes < data2.mes; mes++) 
    {
        totalDias += numeroDiasMes(mes, data2.ano);
    }

    //diferença de dias no último mês
    totalDias += data2.dia;

    //remove dias já contabilizados no primeiro ano
    for (int mes = 1; mes < data1.mes; mes++) 
    {
        totalDias -= numeroDiasMes(mes, data1.ano);
    }
    totalDias -= data1.dia;

    return totalDias;
}
