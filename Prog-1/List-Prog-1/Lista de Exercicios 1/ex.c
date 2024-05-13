#include <stdio.h>
int main()
{
    int idade;
    int total_menores18;
    int total_maisde30;
    do 
        {
        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        if(idade == 0)
        {
            break;
        }

        if (idade > 0 && idade >= 18);
        {
            total_menores18 ++;
        }
        
        if (idade > 0 && idade < 30);
        {
            total_maisde30 ++;
        }
        
        }
    while (idade != 0);

  printf("Menores que 18: %d\n", total_menores18);
  printf("Maiores que 30: %d\n", total_maisde30);
    
}