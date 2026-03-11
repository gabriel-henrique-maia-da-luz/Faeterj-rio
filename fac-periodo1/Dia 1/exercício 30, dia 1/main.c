/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o custo total da viagem (R$), os km rodados e o número de passageiros
//Calcule e exiba: custo por km (R$/km) e custo por passageiro (R$).

int main()
{
    float custo_tot, km, num_passag, custo_km, custo_passag; 
    
    printf("Qual foi o custo total da viagem? ");
    scanf("%f", &custo_tot);
    
    printf("Qual foi a distância, em km? ");
    scanf("%f", &km);
    
    printf("Qual é o número de passageiros? ");
    scanf("%f", &num_passag);
    
    custo_km= custo_tot/km;
    custo_passag= custo_tot/num_passag;
    
    printf("Custo por km: R$%.2f\nCusto por passageiro: R$%.2f", custo_km, custo_passag);
    
    return 0;
}
