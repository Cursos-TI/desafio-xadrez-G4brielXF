#include <stdio.h>
int main () {
 int B, T, R;      //B = bispo, T = torre, R = rainha

for (B = 0; B <= 5; B++) //movimento na diagonal do Bispo
{
    printf ("Cima, direita\n");
}

do
{
    printf ("Esquerda \n"); //movimento da Rainha
    R++;
} while (R <= 8);

do
{
    printf ("Direita \n");
    T++;
} while (T <= 5);






    return 0;
}