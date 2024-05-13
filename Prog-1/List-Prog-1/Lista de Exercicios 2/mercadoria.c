#include <studio.h>
int main()
{
    int codigo, quantidade;
    float preco, desconto, valor_a_pagar;

    printf("Entre com o codigo e a quantidade de produto:");
    scanf("%d%d", &codigo, &quantidade);

    switch (codigo) {
        case 1: preco = 5.30; break;
        case 2: preco = 6.00; break;
        case 3: preco = 3.2; break;
        case 4: preco = 2.5; break;
        default: break;

    }
    valor_a_pagar = quantidade * preco:
     
     if(quantidade>= 15 || valor_a_pagar >= 40){
        desconto = valor_a_pagar + 0.15;
        valor_a_pagar = valor_a_pagar - desconto;
     }
     printf("%.2f\n", valor_a_pagar);
     
}
