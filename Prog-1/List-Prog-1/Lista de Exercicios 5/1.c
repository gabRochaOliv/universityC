#include<stdio.h>
int main()
{
 int n[5], i;

 for(i=0; i<5; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &n[i]);
 }
 printf("\nA ordem inversa dos valores entrados e:\n");

 for(i=0; i<5; i++)
 printf("%d\n", n[4-i]);
}