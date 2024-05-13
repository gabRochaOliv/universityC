#include <stdio.h>

int main() {
  int vet[20];
  int present_nums[20];
  int last_num = 0;
  int count = 0;
  int k = 0;

  for (int i = 0; i < 21; i++) {
    printf("Número %d", i);
    scanf("%d", &vet[i]);
  }

  for (int j = 20; j >= 0; j--) {
    if (j == 20) {
      last_num = vet[j];

      continue;
    }

    if (last_num == vet[j]) {
      count++;

      present_nums[k] = j;
    }

    k++;
  }

  printf("Esteve presente: %d vezes, nas posições:\n", count);

  for (int l = 0; l < count; l++) {
    printf("\tNa posição %d", l);
    scanf("%d", &vec[l]);
  }
}