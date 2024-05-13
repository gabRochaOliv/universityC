// sizeof, retorna a quantidade de byte de qualquer tipo de dado
// (16 bits ou 2 bytes)
// variavel short: pequeno.
// malloc: pede ao sistema operacional um bloco de memoria espeficado pelo programador

#include <stdio.h>
#include <stdlib.h>

struct estrutura
{
    int oi;         // 4 bits 
    int tchau;      // 4 bits
                    // = 8 bits.
};

int main(void)
{
    float x;        //4 bits
    
    double z;       //8 bits
    
    int *p = malloc(sizeof(int)); //parametro para malloc 
                                  // (precisei de um espaço de 4 bits)
    s
    truct estrutura y;

    printf("primeiro: %li", sizeof(y));
    printf("segundo: %li", sizeof(x));
    printf("terceiro: %li", sizeof(z));


}