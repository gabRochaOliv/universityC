#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 4

void main() {
  int m1[M][N];
  int m2[M][N];

  
  int count_m1 = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      m1[i][j] = ++count_m1;
    }
  }


  int count_m2 = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      m2[i][j] = ++count_m2;
    }
  }

  int** m3;

  
  m3 = (int**) malloc(M * sizeof(int*));
  for (int i = 0; i < M; i++) {
    m3[i] = (int*) malloc(N * sizeof(int));
  }


  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      m3[i][j] = m1[i][j] + m2[i][j];
    }
  }


  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      printf("\tMat3[%d][%d] = %d\n", i, j, m3[i][j]);
    }

    printf("\n");
  }
}