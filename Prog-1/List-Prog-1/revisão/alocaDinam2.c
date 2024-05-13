#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    
    //casting +++++++++++++++++++++++++++
    
    int x = 16;
    int y = 3;
    
   float resultado = (float) x / y; //casting: forço que o resultado seja FLOAT ou seja 5.33333..
    
    printf("%f", resultado);

    
    
    
    //alocacao de memoria ++++++++++++++++ (malloc e free)
    
    int *p; //8 bits
    p = (int*) malloc (sizeof(int)); //utilizando casting pra ser do mesmo tipo do ponteiro definido.
    *p = 1000; //importante ter o * para armazenar o resultado (erro de Segmentation fault)
    
    if(p == NULL)
    {
        printf("malloc nao funcionou");    //é importante fazer esse controle
    }
    printf("%d", *p);

    free (p); //desaloca memoria

    //alocacao dinamica (calloc) +++++++++++

    int *ponteiro;

    ponteiro = (int*) calloc(5, sizeof(int)); //vai executar o valor 0 e nao ira executar lixo, diferentemente do malloc.
                                              //alocou 5 elementos do tamanho inteiro.

    *(ponteiro + 1) = 1000;

    printf("%i", *ponteiro); //executa 0, pois para executar 1000 precisa do comando *(ponteiro + 1);



    
}