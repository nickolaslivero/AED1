/*
    Nome:   Nickolas Javier Santos Livero
    Mat:    2115310042
    
    Atividade 05: recursao vs iteração
*/

include <stdio.h>

long fatorial(long n)
{
    if ((n==1) || (n==0))
        return 1;
    else 
        return (fatorial(n-1)*n);
}

long fatorial1(int n)
{
    long fat;
    if ((n==1) || (n==0))
        fat = 1;
    else
        for (fat = 1; n > 1; n--)
            fat = fat * n;
    return fat;
}

int main(int argc, char** argv){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    long result1 = fatorial(num);
    long result2 = fatorial1(num);
    
    printf("Fatorial recursivo': %ld\n", result1);
    printf("Fatorial iterativo: %ld\n", result2);
    
    return 0;
}