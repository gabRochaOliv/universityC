

int main(int argc, char *argv[], char *envp[])
{
    int ret;

    ret = fork(); // replicação do processo
    if (ret < 0)
    { // fork não funcionou
        perror("Erro: ");
        exit(-1);
    }
    else if (ret > 0) // sou o processo pai
        wait(0);      // esperar filho concluir
    else
    {                                    // sou o processo filho
        execve("/bin/date", argv, envp); // carrega binário
        perror("Erro: ");                // execve não funcionou
    }
    printf("Tchau !\n");
    exit(0);
}