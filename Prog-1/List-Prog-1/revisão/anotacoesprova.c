
#include <stdio.h>
int main()
{

//Programa de funçao: Necessário inicializar outras variaveis dentro da função
int retorno(int funcao[], int n) // <<--------
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

int main()
{
    int resultado, vet[6];
    //codigos a serem executados
    //
    resultado = retorno (vet, 6);
    printf("%d", resultado);
}

//Programa em Vetores: ARRAY == VETORES

#include <stdio.h>
#define TAM 6
int main()
{
    int vet[TAM];
    for(int i = 0; i < TAM; i++)
    {
        printf("Digite seu salario:\n");
        scanf("%f", &vet[i]);
    }
}

//Programa em Matrizes: Abrir dois for inicializando outra variaveis ( i , j )
 int matriz [3][3], tamanho, posicao, count;
 for(int i= 0; i<3; i++)
 {
    for(int j = 0; j < 3; j++)
    {
        printf("%d");
        scanf("%d", &matriz[i][j]);
        if(matriz[i][j] %7 == 0)
        {
            tamanho[posicao] = matriz [i][j];
            count++;
        }
        count2++;
    }
     for(int k = 0; k < count; k++)
    {
        printf("Os numeros multiplos de 7 são: %d\n", tamanho[k]);
    }

    %7 == 0;  // SE O RESTO DA DIVISÃO POR 7 FOR IGUAL A 0. (if)
 }
}

///Programa em String: 

#include <string.h>

char str[20], count;

printf("Digite uma frase: ");
fgets(str, 20, stdin); //<--------

count = contabilizador(str, 20);

   printf("%d", count);




