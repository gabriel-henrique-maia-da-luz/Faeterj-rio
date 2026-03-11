/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float C, F, K; 
    
    printf ("Digite a temperatura em Celsius: ");
    scanf ("%f", &C);

    F=(C*9/5)+32;
    K=C+273.15;
    
    printf ("Fahrenheit: %.2f°F\nKelvin: %.2f K", F, K);
    return 0;
}
