#include <stdio.h>
int main()
{
    float numero;
    float dolar;

    printf("Digite a quantidade que quer converter em BRL:\n");
    scanf("%f", &dolar);


    numero = dolar / 4.87 ;
    printf("A conversão foi de:%2.f\n", numero);
    

    //não está dando numero com virgula
}





#include <stdio.h>
int main()
{
    float numero;
    float dolar;

    printf("Digite a quantidade que quer converter em BRL:\n");
    scanf("%f", &dolar);


    numero = dolar / 4.87 ;
    printf("A conversão foi de:%2.f\n", dolar / 4.87);
    scanf("%f", &numero);

    //não está dando numero com virgula
}


#include <stdio.h>

int main()
{
    float quantidade_dolar;
    float quantidade_real;

    printf("Quanto voce possui em dolar?: ");
    scanf("%f", &quantidade_dolar);

    quantidade_real = quantidade_dolar * 4.87;

    printf("Voce possui %.2f dolares", quantidade_real);

}