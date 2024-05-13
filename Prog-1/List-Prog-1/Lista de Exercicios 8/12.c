#include <stdio.h>
#include <string.h>

int totalPalavras(char *str){
    int tempCount = 1;
    for (int count = 0; str[count] != '\0'; count++){
        if (*(str+count) == ' '){
            tempCount++;
        }
    }
    return tempCount;
}

int main()
{
    char str[200];
    char *p = str;
    
    printf("Digite uma string: ");
    gets(p);
    
    printf("\nTotal de palavras: %d", totalPalavras(p));
    
    return 0;
}
