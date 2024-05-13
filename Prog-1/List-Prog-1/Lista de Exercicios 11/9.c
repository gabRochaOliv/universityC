#include <stdio.h>
int maiorElemento(int *vet, int tam) {
if (tam == 1) { 
return vet[0];
} else {
int maior = maiorElemento(vet, tam-1);
return (vet[tam-1] > maior) ? vet[tam-1] : maior;
}
}
int main() {
int vet[] = {12, 15, 7, 23, 9, 18};
int tam = sizeof(vet) / sizeof(int);
int maior = maiorElemento(vet, tam);
printf("O maior elemento do array e: %d\n", maior);

return 0; }