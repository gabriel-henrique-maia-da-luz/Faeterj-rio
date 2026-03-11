/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o preço do ingresso (R$), a quantidade e a taxa de serviço (%)
//Calcule e exiba: subtotal (R$), taxa de serviço (R$) e total final (R$)

int main()
{
    int qnt;
    float preco, tx, subtotal, tx_preco, tot;
    
    printf("Digite o preço do ingresso: ");
    scanf("%f", &preco);
    
    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &qnt);
    
    printf("Digite a taxa de serviço: ");
    scanf("%f", &tx);
    
    subtotal= preco*qnt;
    tx_preco= tx/100*subtotal;
    tot= subtotal+tx_preco;
    
    printf("\nSubtotal: R$%.2f\nTaxa de serviço, em reais: R$%.2f\nValor total: R$%.2f", subtotal, tx_preco, tot);
    
    return 0;
}
