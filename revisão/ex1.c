#include <stdio.h>
int main ()
{
    int numero;
    int sucessor;
    int antecessor;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    antecessor = numero -1;
    sucessor = numero +1;

    printf("O antecessor é: %d \n", antecessor);
    printf("O sucessor é: %d \n", sucessor);