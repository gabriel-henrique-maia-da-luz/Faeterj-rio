/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float km, custo_med, preco, litros_nec, custo_tot;
    
    printf ("Quantos quilometros (km) você irá percorrer? ");
    scanf ("%f", &km);

    printf ("Quantos quilometros (km) você consegue percorrer por litro (L)? ");
    scanf ("%f", &custo_med);
    
    printf ("Qual é o valor do litro do combustivel? ");
    scanf ("%f", &preco);
    
    litros_nec=km/custo_med;
    custo_tot=litros_nec*preco;
    
    printf ("A quantidade de Litros necessário é %.2f Litros\nE o custo total será de R$%.2f.", litros_nec, custo_tot);
    
    return 0;
}
