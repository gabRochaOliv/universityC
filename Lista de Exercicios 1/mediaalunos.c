#include <stdio.h>
int main()
{
    float n1, n2, n3, n4;
    float media;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4)/4;
    printf("Media final: \n", media);

    if(media => 7) {
        printf("APROVADO\n");
    }
    printf("Reprovado");

}