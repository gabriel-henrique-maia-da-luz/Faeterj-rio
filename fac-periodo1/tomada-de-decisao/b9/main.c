/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//9. Saldo suficiente: Permitir saque se houver saldo suficiente
//senão informar saldo insuficiente.
//Entrada: saldo, saque. Saída: saldo final ou mensagem.

int main()
{
    float saldo, saque, tot;

    printf("Qual é o valor do seu saldo? \nR$");
    scanf("%f", &saldo);
    
    printf("\nQual é o valor do saque? \nR$");
    scanf("%f", &saque);
    
    if(saque>saldo){
        printf("Infelizmente, o seu saldo é insuficiente.");
        
    } else {
        tot=saldo-saque;
        printf("\nSaldo atual: R$%.2f\nValor do saque: R$%.2f\nSaldo final: R$%.2f", saldo, saque, tot);
    }
    
    return 0;
}
