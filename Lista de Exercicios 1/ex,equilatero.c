#include <stdio.h>
int main()
{
    float primeiro_lado = 0;
    float segundo_lado = 0;
    float terceiro_lado = 0;

    if

}ntf("Escolha 3 lados de um triangulo:\n");
    scanf("%f%f%f", &primeiro_lado, &segundo_lado, &terceiro_lado);

    if (primeiro_lado == segundo_lado && primeiro_lado == terceiro_lado && segundo_lado == terceiro_lado);
    {
        printf("O triangulo é equilatero");
    }
    else if(primeiro_lado == segundo_lado || primeiro_lado == terceiro_lado || terceiro_lado == segundo_lado);
    {
        printf("O triangulo é escaleno");
    }
    else {
        printf("O triangulo é isoceles");
    }
}