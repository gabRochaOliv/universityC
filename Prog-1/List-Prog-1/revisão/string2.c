#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, cont = 0;
    char frase[21];

    printf("Digite uma frase até 20 caracteres: ");
    gets(frase) ;

    for(i=0; i<20; i++)
    {
        if(frase [i] == 'c' || frase [i] == 'C')
        {
            cont ++;
        }
    }

    printf("A quantidade de C ou c foi de %d\n", cont);
    system("pause");


}

//Escrever uma frase de até 20 caracteres e contar quantos C existem nela