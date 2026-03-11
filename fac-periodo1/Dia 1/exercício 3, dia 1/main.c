/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float conta, porc_gorj, tot, indiv_tot, pessoas;
    
    printf("Qual é o valor da conta? ");
    scanf ("%f", &conta);
    
    printf("Quantas pessoas irão contibuir? ");
    scanf ("%f", &pessoas);
    
    printf("Qual é a porcentagem da gorjeta? ");
    scanf ("%f", &porc_gorj);
    
    tot=((porc_gorj/100)*conta)+conta;
    indiv_tot=tot/pessoas;
    
    printf("O valor total da conta é R$%.2f\nE o valor que cada um terá que pagar será R$%.2f", tot, indiv_tot);
    
    return 0;
}
