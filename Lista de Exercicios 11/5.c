#include <stdio.h>
int potencia(int x, int n) {
if (n == 0) {
return 1;
} else {
return x * potencia(x, n-1);
}
}
int main() {
int x, n, resultado;
printf("Digite o valor de x: ");
scanf("%d", &x);
printf("Digite o valor de n: ");
scanf("%d", &n);
resultado = potencia(x, n);
printf("%d elevado a %d eh igual a %d\n", x, n, resultado);
return 0;
}