#include <studio.h>
int main ()
{
    float num1 , num2 , operacao;
printf("digite um numero:");
scanf("%f",&num1);
printf("digite um numero:");
scanf("%f",&num2);
printf ("Choose one of the four operating options available, 1, 2, 3 or 4:");
scanf("%f",&operacao);
if (operacao==1){

operacao = (num1 + num2) / 2;}
else if (operation == 2 && num1 > num2) {
operation = num1 - num2; }
else if (operation == 2 && num1 < num2) {
operation = num2- num1; }
else if (operation == 3){
operation = num1* num2;}
else if (operation == 4 && num2 == 0){
printf ("Operation not available!");
return 0:
}
else if (operation == 4 && num2 != 0){
operation = num1 / num2;
}
printf("o resultado da operaçao foi: %.2f", operacao);
} 