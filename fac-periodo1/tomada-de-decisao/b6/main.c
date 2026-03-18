/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//6. Frete grátis: Conceder frete grátis em compras acima de R$200
//ou cobrar R$25 caso contrário.
//Entrada: valor da compra. Saída: valor do frete.

int main()
{
    float compra, frete, tot;
    
    printf("Qual é o valor da compra? R$");
    scanf("%f", &compra);
    
    if (compra>200){
        frete=0;
        
    } else {
        frete=25;
    }
    
    tot=compra+frete;
    
    printf("\nValor da compra: R$%.2f\nFrete: R$%.2f\nValor final: R$%.2f", compra, frete, tot);
    
    return 0;
}