/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float preco_uni, aliq_imposto, sub_tot, imposto, tot;
    int  quant;
    
    printf ("Qual é o preço unitário? ");
    scanf ("%f", &preco_uni);
    
    printf ("Qual é a quantidade? ");
    scanf ("%i", &quant);
    
    printf ("Qual é a aliquota de imposto? ");
    scanf ("%f", &aliq_imposto);
    
    sub_tot=preco_uni*quant;
    imposto=(aliq_imposto/100)*sub_tot;
    tot=sub_tot+imposto;
    
    printf("Valor do produto: %.2f\nValor do imposto: %.2f\nValor total: %.2f", sub_tot, imposto, tot);
    
    return 0;
}
