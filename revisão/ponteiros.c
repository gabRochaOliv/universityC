#include <stdio.h>

    void funcao (int *vet, int *menor, int *maior, int tam)
    {
        int i;

        *menor = *vet;
        *maior = *vet;

        for (i = 0; i < tam; i++)
        {
            if(*menor > *(vet + i))
            {
                *menor = *(vet + i);
            }

            if(*maior < *(vet + i))
            {
                *maior = *(vet + i);
            }
        }
    }   


int main()
{
    int maior;
    int menor;

    int vet[3] = {3, 5, 10};

    funcao(vet, 3, &maior, &menor);

    printf("O maior eh: %d     O menor eh: %d", maior, menor);
}
