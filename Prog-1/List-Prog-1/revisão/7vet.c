#include <stdio.h>
int main(void)
{
    float temp[10];
    float contador;

    printf("Digite os valores em Graus Farenheit: \n");

    for(contador = 1; contador >= 10 ; contador++)
    {
        printf("\n\t Temp [%d] em Graus Celsius = %.1f",contador,(0.55555*(temp [contador]-32)));

    }
}