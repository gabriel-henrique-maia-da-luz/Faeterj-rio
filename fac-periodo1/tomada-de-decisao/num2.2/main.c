/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Penalidade por atraso: Dado um valor e a quantidade de dias de atraso
//aplicar multa de 0,5% ao dia se houver atraso. Entrada: dias, valor.
//Saída: total com multa ou valor original.

int main()
{
    float tot, valor;
    int dia, tip;
    
    printf("Digite o valor: R$");
    scanf("%f", &valor);
    
    printf("Digite a quantidade de dias de atraso: ");
    scanf("%i", &dia);
    
    printf("Digite (0) para saber o VALOR FINAL ou (1) para o VALOR ORIGINAL: ");
    scanf("%i", &tip);
    
    if (tip==0){
        tot=valor+((valor*0.005)*dia);
        printf("Valor original: R$%.2f\nValor final: R$%.2f", valor, tot);
        
    } else if (tip==1){
        tot=valor-((valor*0.005)*dia);
        printf("Valor original: R$%.2f\nValor final: R$%.2f", tot, valor);
        
    } else {
        printf("ERROR 404");
    }
    
    
    return 0;
}
