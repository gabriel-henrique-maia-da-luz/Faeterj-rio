/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float compra, tot;
    int desc;
    desc=0;
    
    printf("\n\nDigite o valor da compra: ");
    scanf("%f", &compra);
    
    if (compra<=100){
        tot=compra-(compra*0.05);
        desc=5;
        
    } else if (compra<=500){
        tot=compra-(compra*0.1);
        desc=10;
        
    } else {
        tot=compra-(compra*0.15);
        desc=15;
        
    }
    
    printf("\nValor inicial: R$%.2f\nValor após o desconto (%i%% de desconto): R$%.2f", compra, desc, tot);
    
    return 0;
}
}
