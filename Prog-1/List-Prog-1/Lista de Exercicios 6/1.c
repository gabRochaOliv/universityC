#include <stdio.h>
int main()
{
    int m = 0, n = 0;
 
    int par=0, impar=0;

    do {
    printf("Digite o numero de linhas: ");
    scanf("%d", &m);

    }
    while (m < 2 || m > 15);

    do{
       printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    }
    while (m < 3 || m > 20);
    
     int matriz [m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Digite o valor para posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz [m][n]);

            if(matriz [m][n] %2 == 0)
            {
                par += matriz [m][n];
            }
            else
            {
                impar += matriz [m][n];
            }

        }
        
    }
        printf("A soma dos valores par são: %d\n", par);
        printf("A soma dos valores impares são: %d\n", impar);

}