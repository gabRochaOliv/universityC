#include <stdio.h>
#include <string.h>
int eh_palindromo(char str[], int inicio, int fim) {

if (inicio >= fim) {
return 1;
}

if (str[inicio] == str[fim]) {
return eh_palindromo(str, inicio+1, fim-1);
}
else {
return 0;
}
}
int main() {
char str[100];
printf("Digite uma string: ");
scanf("%s", str);
int tamanho = strlen(str);
if (eh_palindromo(str, 0, tamanho-1)) {
printf("A string %s eh um palindromo\n", str);
}
else {
printf("A string %s nao eh um palindromo\n", str);
}
return 0;
}