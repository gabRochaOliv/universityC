#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h> // essa lib não funciona no compilador normal pois não tem permissão
 
int main ()
{
  int retval ; // variavel que vai receber um valor de retorno
 
  printf ("Ola, sou o processo %5d\n", getpid()) ; // função que rebece o valor de identificador do processo
  retval = fork () ;
  printf ("[retval: %5d] sou %5d, filho de %5d\n", retval, getpid(), getppid()) ; //getppid é o valor do processo filho
 
  if ( retval < 0 )    // erro no fork() se retornar valor negativo; possiveis erros: falta de memória
  {
    perror ("Erro") ;
    exit (1) ;
  }
  else
    if ( retval > 0 )  // sou o processo pai (sempre que for maior do que 0 vai ser um processo pai)
      wait (0) ; // espera o processo filho terminar 
    else               // sou o processo filho
      sleep (5) ;
 
  printf ("Tchau de %5d!\n", getpid()) ;
  exit (0) ;
}