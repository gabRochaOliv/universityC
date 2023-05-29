#include <stdio.h>
int main()
{
    int dinheiro;
    int sobra;
    //1 Colocar dinheiro
    printf("Insira o valor:\n");
    scanf("%d", &dinheiro);
    //2 Verificação do Troco (multiplo de 5)
    //se multiplo não multiplo de 5 sai do programa
    //se multiplo de 5 ele continua o programa

    if(dinheiro %5 != 0)
    {
        printf("Dinheiro não é multiplo de 5");
        exit(1);
    }
    else 
    {   
        sobra = dinheiro %7;
        printf("A sobra foi de: %d\n", sobra);
        
    }
}






