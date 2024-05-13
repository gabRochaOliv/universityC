#include <stdio.h>

int main()
{
    int multiplicador;
    int numero;

    printf("Digite um numero de 1 a 10 para ser gerada a tabuada: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d", numero , multiplicador , (numero * multiplicador));
        multiplicador ++;
        }
    while 
        (multiplicador <= 10);
    }