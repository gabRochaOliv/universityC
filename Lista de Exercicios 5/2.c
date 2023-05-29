//Faca um programa que leia uma sequencia de numeros qualquer e armazene em um vetor,
//em seguida, implemente uma funcao que contabilize e retorne o total de ocorrencias do
//ultimo numero lido desta sequencia.



#include <stdio.h>
int main(void)
{
    int numeros;
    int armazenamento[5];
    int i;
    int count;

    

    for(int i = 0; i < 6; i++)
    {
        printf("Digite 10 numeros:");
        scanf("%d", &armazenamento[i]);
        
    }

    numeros = compara(armazenamento, 5);

    printf("%d", numeros);


}
    int compara(int vet[], int n)
    {
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(vet[i] == vet[n])
            {
                count ++;
            } 
        }

        return count;
    }
    