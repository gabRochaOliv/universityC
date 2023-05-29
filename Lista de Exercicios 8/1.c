#include <stdio.h>

int negativo (int *vet, int tam){
    
    int count = 0;
    
    for (int i=0; i<tam; i++){
        if(*(vet+i) < 0){
            count++;
        }
    }
    return count;
}

int main()
{
    int vet[5] = {10, -2, -4, 3, 1};

    printf("%d", negativo(vet, 5));
}
