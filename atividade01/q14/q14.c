#include <stdio.h>

void main(int argc, char** argv) 
{
   int x, y, *p;
   y = 0; // Inicializa y com o valor 0

   p = &y; // p recebe o endereço de memória de y
   x = *p; // x recebe o valor apontado por p, ou seja, o valor de y (0)

   x = 4; // Atualiza o valor de x para 4

   (*p)++; // Incrementa o valor apontado por p (valor de y) em 1

   --x; // Decrementa o valor de x em 1

   (*p) += x; // Adiciona o valor de x ao valor apontado por p (valor de y)

   // x = 3
   // y = 4
   // p contém o endereço de memória de y
}
