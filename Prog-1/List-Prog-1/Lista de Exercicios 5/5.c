#include <stdio.h>
#define TAM 6

int main(void)
{
    float vet [TAM];
    float resultado;

    for(int i = 0; i < TAM; i++)
    {
        printf("Digite seu salario:\n");
        scanf("%f", &vet[i]);
    }
    
    resultado = salario_novo (vet, 5);
    printf("Voce deve pagar de impostos de renda: ");
}

int salario_novo(int vet[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (vet[i]<= 1904)
        {
            vet[i] = (vet[i]*1);
        }
        else if(vet[i] > 1904 && vet[i] <= 2827)
        {
            vet[i] = (vet[i]* 0.075);
        }
         else if(vet[i] > 2827 && vet[i] <= 3751)
        {
            vet[i] = (vet[i]* 0.15);
        }
         else if(vet[i] > 3751 && vet[i] <= 4665)
        {
            vet[i] = (vet[i]* 0.225);
        }
         else if(vet[i] > 4665)
        {
            vet[i] = (vet[i]* 0.275);
        }
    }
}