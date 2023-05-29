#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz_positiva, raiz_negativa;

    printf("escolha o primeiro numero:");
    scanf("%f", &a);
    printf("escolha o segundo numero:");
    scanf("%f", &b);
    printf("escolha o terceiro numero");
    scanf("%f", &c);

    delta = (b*b) - 4*a*c;
    raiz_positiva = (-b + pow(delta, 0.5))/2*a;
    raiz_negativa + (-b - pow(delta, 0.5))/2*a;

    if(delta< 0)
    {
        printf("Nao existem raizes reais");
    }
    else if(delta>=a 0){
        printf ("As raizes da equeção serão %f e %f , raiz_positiva, raiz_negativa");

    }
else{ 
    printf("A equação não é de de segundo grau");
}
}