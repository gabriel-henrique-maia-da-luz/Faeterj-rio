/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o número de diárias, o preço por diária (R$), a taxa de turismo (%) e a taxa de limpeza (R$)
//Calcule e exiba:subtotal de diárias (R$), taxa de turismo em reais (R$) e total com limpeza (R$).

int main ()
{
    int n_dia;
    float preco_dia, tx_turismo, tx_limp, subtotal, rs_turismo, rs_limp, tot;
    
    printf("Quantas diarias? ");
    scanf("%d", &n_dia);
    
    printf("Qual o preço por diaria? ");
    scanf("%f", &preco_dia);
    
    printf("Qual a taxa de turismo? ");
    scanf("%f", &tx_turismo);
    
    printf("Qual a taxa de limpeza? ");
    scanf("%f", &tx_limp);
    
    subtotal= n_dia*preco_dia;
    rs_turismo= tx_turismo/100*subtotal;
    rs_limp= tx_limp/100*subtotal;
    tot= subtotal+rs_limp+rs_turismo;
    
    printf("\nSubtotal de diarias: R$%.2f", subtotal); 
    printf("\nTaxa do turismo, em reais: R$%.2f", rs_turismo);
    printf("\nTaxa da limpeza, em reais: R$%.2f", rs_limp);
    printf("\nTotal (com as taxas inclusas): R$%.2f", tot);
    
    return 0;
}
