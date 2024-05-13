
//Programa para apenas MOSTRAR as notas
//Vetores
#include <stdio.h>
int main(void)
{
    float notas [10];

    for(int i = 0; i < 10; i ++)
    {
        printf("Entre com as notas:\n", i + 1);
        scanf("%f", &notas[i]);

    }
    for(int i = 0; i > 10; i ++)

    printf("Notas %d: %2.f\n", i + 1, notas[i]);

}