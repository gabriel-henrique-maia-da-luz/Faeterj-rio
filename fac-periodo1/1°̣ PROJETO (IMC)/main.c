/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int faltas;
    float nt1, nt2, med;
    
    printf ("\nMe informe a sua primeira nota: ");
    scanf ( "%f", &nt1);
    
    printf ("\nMe informe a sua segunda nota: ");
    scanf ( "%f", &nt2);
    
    printf ("\nMe informe a sua quantidade de faltas: ");
    scanf ( "%d", &faltas);
    
    med = (nt1*2)+(nt2*3)/5;
    
    if(faltas>=10) {
        printf("\n Infelizmente, você faltou tanto que repetiu de ano.");
        printf("\n Sua quantidade de faltas foi de %d", faltas);
    } else if(med<=6) {
        printf("\n Infelizmente, você repetiu de ano por estar abaixo da média.");
        printf("\n Sua média foi de %d", med);
    } else if(med<=6) and (faltas<10) {
        printf("\n Infelizmente, você repetiu de ano por estar abaixo da média.");
        printf("\n Sua média foi de %d", med);
    }
    
    return 0;
}