#include <stdio.h>
#include <stdlib.h>

int main() {
  int r, c;

  printf("Digite o número de linhas: ");
  scanf("%d", &r);

  printf("Digite o número de linhas: ");
  scanf("%d", &c);

   int i, j, count;

    int* arr[r];
    for (i = 0; i < r; i++) {
        arr[i] = (int*)malloc(c * sizeof(int));
    }

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
          arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
          if (arr == NULL) {
            continue;
          }

          printf("%d ", arr[i][j]);
        }
    }

    /* Code for further processing and free the
      dynamically allocated memory */

    for (int i = 0; i < r; i++) {
        free(arr[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int search_num(int num, int **arr, int row, int col);

int main() {
  int n = 10;

  int r, c;

  printf("Digite o numero de linhas: ");
  scanf("%d", &r);

  printf("Digite o numero de colunas: ");
  scanf("%d", &c);

  int** mat = (int**) malloc(r * sizeof(int*));
  for (int i = 0; i < r; i++) {
    mat[i] = (int*) malloc(c * sizeof(int));
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Digite um número: ");
      scanf("%d", &mat[i][j]);
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (search_num(n, mat, i, j) == 1) {
        printf("Match!!\n");

        return 0;
      }
    }
  }

  printf("Ops..não deu match\n");

  free(mat);

  return 0;
}

int search_num(int num, int **arr, int row, int col) {
  if (arr[row][col] == num) {
    return 1;
  }

  return 0;
}