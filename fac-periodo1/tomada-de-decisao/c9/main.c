/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//9. Imposto: Se base > 3000, reduzir 5% se dependentes >=2, e mais 2% se for doador.
//Caso contrário, nenhum abatimento.

int main()
{
    float base;
    int dep, doa;
    
    printf("Digite o Valor: R$");
    scanf("%f", &base);
    
    printf("Digite (1) se for dependente e (0) caso não: ");
    scanf("%i", &dep);
    
    printf("Digite (1) se for doador e (0) caso não: ");
    scanf("%i", &doa);
    
    if (base>3000){
        if (dep==1){
            base=base-(base*0.05);
        }
        if (doa==1){
            base=base-(base*0.05);
        }
    }
    
    printf("\nValor final: R$%.2f", base);
    
    return 0;
}
