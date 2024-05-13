#include <stdio.h>
void imprime_pares(int n) {
if (n < 0) {
return;
}
imprime_pares(n - 1);
if (n % 2 == 0) {
printf("%d ", n);
}
}
int main() {
int n;
printf("Digite um numero inteiro positivo par: ");
scanf("%d", &n);
if (n % 2 != 0 || n < 0) {
printf("Erro: o numero digitado nao e par ou nao e positivo.\n");
return 1;
}
imprime_pares(n);
return 0;
