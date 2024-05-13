#include <stdio.h>

int main(void)
{
  int numero = 0;
  int calc = 0;

  do
  {
    printf("Digite um valor: ");
    scanf("%d", &numero);

    if (num == 0)
    {
      break;
    }

    else if (numero % 2 == 0)
    {
      if (calc == 0)
      {
        calc++;
      }

      calc *= num;
    }

  } while (numero != 0);

  if (calc != 0)
  {
    printf("O produto é de: %d\n", calc);
  }
  else
  {
    printf("Não temos informções suficientes para o cálculo\n");
  }
}
