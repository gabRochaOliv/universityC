#include ‹stdio.h>

int main()
{


int idade, altura;
int total = 0;
printf("qual sua idade:");
scanf("%d",&idade);
printf ("qual sua altura?:");
scanf ("%d", &altura);
if (altura >= 150 && idade >= 12){
total++}
if(altura >= 140 && idade >= 14){
totalt+;}
if(altura >= 170 && idade >= 16){
total++;}

if (total >= 1){
printf ("voce pode ir no %d parque de diversoes", total);
}
else{
printf("Me desculpe, voce nao pode ir no parque de diversoes");}
}