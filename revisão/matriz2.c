#include <stdio.h>
int main(void)
{
    float notasIniciais[4][4] = {0};
    float mediasFinais[4] = {0};

    float media = 0;
    
    printf("Insira as 4 notas dos alunos: \n");

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &notasIniciais[4][4]);
            media += notasIniciais[4][4];
        }

        mediasFinais [4] = media / 4;
        media = 0;
        printf("Insira as 4 notas dos alunos %f:\n", i+2);
    for(int aluno = 0; aluno < 4; aluno ++)
    {
        printf("A media do aluno final eh: ", aluno +1, mediasFinais[4]);
    }
    }
    
}