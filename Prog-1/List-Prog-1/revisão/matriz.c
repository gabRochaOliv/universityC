#include <stdio.h>
int main(void)
{
    int matriz [3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};


    for(int n = 0; n < 3; n++)
    {
        for(int m = 0; m < 3; m++)
        {
            printf("%i", matriz[n][m]);
        }
        printf("\n ");
    }
    
}