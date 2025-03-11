#include <stdio.h>
int main () {
 int T = 1;
 int R = 1;      //B = bispo, T = torre, R = rainha, C = cavalo
 int C = 1;
 int B;

printf ("Movimento do Bispo: \n");
printf ("\n");

for (B = 0; B < 5; B++) 
{
    printf ("Cima, direita\n");
}
printf ("\n");
printf ("Movimento da Rainha \n");
printf ("\n");
 do
{
    printf ("Esquerda \n"); 
    R++;
} while (R <= 8);

printf ("\n");
printf ("Movimento da Torre \n");
printf ("\n");

do
{
    printf ("Direita \n");
    T++;
} while (T <= 5);

printf ("\n");
printf ("Movimento do Cavalo \n");
printf ("\n");

while (C--)
{
    for (int i = 0; i < 2; i++)
    {
        printf ("Cima\n");
    }
    printf ("Esquerda\n");
}



    return 0;
}