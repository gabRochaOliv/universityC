#include <studio.h>
int main()
{
    printf("escolha um numero inteiro:");
    scanf ("%d", &num1);

    printf("escolha um numero inteiro:");
    scanf ("%d", &num2);

    printf("escolha um numero inteiro:");
    scanf ("%d", &num3);

    if(num1 == num2 && num1 == num3 == num2){
        printf("1");
    }
    else if (num1 != num2 && num1 != num3 != num2){
        printf("2");
    }
    else {
        printf ("3");
    }

}