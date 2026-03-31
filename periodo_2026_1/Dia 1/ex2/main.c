/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float porc_gorj, conta, gorj, tot;
    
    printf("Digite o valor da conta: ");
    scanf ("%f", &conta);
    
    printf ("Qual é a porcentagem sobre o valor? ");
    scanf ("%f", &porc_gorj);
    
    gorj=(porc_gorj/100)*conta;
    tot=gorj+conta;
    
    printf("Porcentagem sobre o valor: %.2f%\nValor da gorjeta: %.2f\nValor total: %.2f",porc_gorj, gorj, tot);
    
    return 0;
}
