/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float l1, l2, l3, soma;
    
    printf("Digite o valor dos 3 lados do triangulo: ");
    scanf("%f%f%f", &l1, &l2, &l3);
    
    soma=l1+l2+l3;
    
    printf("\nA soma de todos os lados é %.2f\n", soma);
    
    if (l1==l2 && l2==l3){
        printf("equilátero");
    } else if (l1!=l2 && l2!=l3 && l3!=l1){
        printf("escaleno");
    } else {
        printf("isósceles");
    }
    
    return 0;
}
