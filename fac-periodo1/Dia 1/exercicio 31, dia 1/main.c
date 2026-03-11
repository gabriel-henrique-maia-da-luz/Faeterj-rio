/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia as horas de uso no mês, o custo por hora (R$) e a taxa fixa mensal (R$)
//Calcule e exiba: custo variável (R$) e total mensal (R$).

int main()
{
    float h_mes, h_custo, tx_fixa, custo_variavel, tot;
    
    printf("Quantas horas de uso no mês? ");
    scanf("%f", &h_mes);
    
    printf("Qual é o custo por hora? ");
    scanf("%f", &h_custo);
    
    printf("Qual é a taxa fixa mensal? ");
    scanf("%f", &tx_fixa);
    
    custo_variavel= h_mes*h_custo;
    tot= custo_variavel+tx_fixa;
    
    printf("\nCusto variavel: R$%.2f\nValor total mensal: R$%.2f", custo_variavel, tot);
    
    return 0;
}
