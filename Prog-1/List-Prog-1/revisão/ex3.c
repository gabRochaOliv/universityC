#include <stdio.h>
int main()
{
    int m;
    int n;
    int resultado1;
    int resultado2;
    int x;
    int y;
    float resultado3;
    
    printf("Digite 2 numeros inteiros a serem somados:\n");
    scanf("%d%d", &m , &n);
  
    resultado1 = m + n; 
  
    printf("Resultado da soma 1 foi: \n", m + n);
    scanf("%d", &resultado1);

    
    printf("Digite mais 2 numeros inteiros a serem somados:\n");
    scanf("%d%d", &x , &y);

    resultado2= x + y;

    printf("Resultado da soma 2 foi: \n", x + y);
    scanf("%d", &resultado2);

    resultado3 = resultado1 / resultado2;

    printf("A diferença do resultado 1 pelo resultado 2 foi:\n",);
    scanf("%f", &resultado3);

}