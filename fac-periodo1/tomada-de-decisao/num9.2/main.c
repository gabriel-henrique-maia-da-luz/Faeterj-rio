/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int salm, falta, aum;
    float av;
    
    printf("Qual é sua faixa salarial, em salários minimos? ");
    scanf("%i", &salm);
    
    printf("Qual é o valor da sua avaliação? ");
    scanf("%f", &av);
    
    printf("Quantas faltas você tem? ");
    scanf("%i", &falta);
    
    if (salm<=3){
        if (av>8){
            if (falta==0){
                aum=12;
            } else if (falta>0){
                aum=10;
            }
        } else if(6<=av<=8){
            aum=8;
        } else {
            aum=2;
        }
    } else {
        aum=2;
    }
    
    printf("\n\nVocê irá receber %i%% de aumento.", aum);
    
    return 0;
}
