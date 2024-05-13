#include <stdio.h>
#define LIN 5
#define COL 3

int main(void)
{
    int matriz[LIN][COL];
    int tamanho [15];
    int posicao;
    int count;


    for(int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < LIN; j++)
        {
            printf("Digite numeros na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] % 7 == 0)
            {
                tamanho [posicao] = matriz [i][j];
                count++;
            }

            posicao++;


        }
    }
    for(int k = 0; k < count; k++)
    {
        printf("Os numeros multiplos de 7 são: %d\n", tamanho[k]);
    }

}