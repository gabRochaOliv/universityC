#include <stdio.h>

int main(void)
{
    int valor = 7;
    int valor_multiplo_de5;

    printf("Digite o valor:\n");
    scanf("%d", &valor_multiplo_de5);

    while ((valor_multiplo_de5 %5) != 0)
    (
        printf("Digite o valor:\n");
        scanf("%d", &valor_multiplo_de5);
    )
}