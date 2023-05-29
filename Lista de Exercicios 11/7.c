#include <stdio.h>
int soma_array(int array[], int tamanho) {
if (tamanho == 0) { // Caso base: array vazio
return 0;
} else {
return array[tamanho - 1] + soma_array(array, tamanho - 1);
}
}
int soma_array_inverso(int array[], int tamanho) {
if (tamanho == 0) { // Caso base: array vazio
return 0;
} else {
return array[tamanho - 1] + soma_array_inverso(array, tamanho - 1);
}
}
int main() {
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tamanho = sizeof(array) / sizeof(int);
int resultado = soma_array_inverso(array, tamanho);
printf("A soma dos elementos do array, do ultimo ao primeiro, e: %d\n", resultado);
return 0;
}