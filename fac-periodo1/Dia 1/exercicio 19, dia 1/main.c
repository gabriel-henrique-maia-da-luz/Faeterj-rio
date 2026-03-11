/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o valor em BRL, a cotação BRL/USD e a cotação BRL/EUR.
//Calcule e exiba: valor em USD e valor em EUR.

int main()
{
    float brl, usd, eur; 
    
    printf("Digite um valor, em reais: ");
    scanf("%f", &brl);
    
    usd= brl*5.14;
    eur= brl*6.07;
    
    printf("\nDolár americano: US$%.2f\nEuro: %.2f €.", usd, eur);
    
    return 0;
}
