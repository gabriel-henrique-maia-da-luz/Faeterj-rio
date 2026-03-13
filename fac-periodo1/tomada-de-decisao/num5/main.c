/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//1. leia 2 num e diga o maior
//2. 5% de desconto em até 100reais, 10% pra 500, 15% para mais de 500reais
//mostre o valor final

int main()
{
    int n1, n2;
    
    printf("Digite 2 números: ");
    scanf("%i%i", &n1, &n2);
    
    if (n1>n2){
        printf("%i", n1);
        
    } if (n1<n2) {
        printf("%i", n2);
        
    } else {
        ("Ambos os números são iguais (%i)", n1);
        
    }
    
    return 0;
}