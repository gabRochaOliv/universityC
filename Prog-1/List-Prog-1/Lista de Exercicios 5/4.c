
//Faca um programa que receba do usuario um vetor de “n” numeros inteiros, em seguida,
//implemente uma funcao que determine e retorne o maior valor do vetor lido.

#include <stdio.h>
int main(void)
{
    int vet[6];
    int x;
    int resultado;

    for(int i= 0; i < 6; i++)
    {
        printf("Digite 6 numeros: ");
        scanf("%d",&vet[i]);

    }

    resultado = retorno (vet, 6);
    printf("%d", resultado);


}

int retorno(int funcao[], int n)
{
    int count;
    int maior = 0;

    for(int i = 0; i < n; i++)
    {
        if(funcao[i] > maior)
        {
           maior = funcao[i];
        }
    }

    return maior;
}
