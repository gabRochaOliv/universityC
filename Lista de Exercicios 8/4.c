#include <stdio.h>

void achar(int *vet, int tam, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;
    for(i = 0; i < tam; i++){
        if(*menor > *(vet + i)){
            *menor = *(vet + i);
        }
        if(*maior < *(vet + i)){
            *maior = *(vet + i);
        }
    }
}

int main()
{
    int menor, maior, vet[3] = {200, 9, 18};
    
    achar(vet, 3, &menor, &maior);
    printf("Menor: %d\t Maior: %d\n", menor, maior);
    
}
