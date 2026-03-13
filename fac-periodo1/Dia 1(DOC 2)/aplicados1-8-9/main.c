/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//1. Leia o preço unitário e a quantidade comprada de um produto, e mostre o valor total.
//8. Leia o preço de um produto e o percentual de desconto, e mostre o preço final.
//9. Leia o valor de uma compra e a quantidade de parcelas, e mostre o valor de cada parcela.

int main()
{
    float preco, qnt, percent, desconto, qnt_parcelas, valor_parcelas, subtot, tot;
    
    printf("Qual é o preço do produto? ");
    scanf("%f", &preco);
    
    printf("Quantos que você vai comprar? ");
    scanf("%f", &qnt);
    
    printf("Qual é o desconto do produto? ");
    scanf("%f", &percent);
    
    subtot= preco*qnt;
    desconto= (percent/100)*subtot;
    tot= subtot-desconto;
    
    printf("\nSubtotal: %.2f\nDesconto: %.2f\nValor com desconto: %.2f\n", subtot, desconto, tot);
    
    printf("\nEm quantas parcelas você vai pagar esse produto? ");
    scanf("%f", &qnt_parcelas);
    
    valor_parcelas= tot/qnt_parcelas;
    
    printf("\nVocê terá que pagar %.0f parcelas de R$%.2f.", qnt_parcelas, valor_parcelas);
    
    return 0;
}