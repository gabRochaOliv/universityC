#include <stdio.h>

void CopiarString(char *copiar, char *colar){
    
    while(*copiar != '\0'){
        *copiar = *colar;
        copiar++;
        colar++;
        
    }
}

int main()
{
    char string1[] = "Nao gosto de programar!";
    char string2[20] = "Gosto de programar!";
    
    CopiarString(string1, string2);
    printf("%s\n", string2);
    
    getchar();
    
}