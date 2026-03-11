/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//17. Divisão simples - Leia dois números reais e mostre o quociente.
//21. Converter metros para centímetros - Leia um valor em metros e mostre em centímetros.
//35. Média aritmética simples - Leia dois números e mostre a média.

int main()
{
    int quoc, num1, num2;
    float m, cm, numero1, numero2, med;
    
    printf("digite um número: ");
    scanf("%d", &num1);
    
    printf("digite outro número: ");
    scanf("%d", &num2);
    
    quoc= num1%num2;
    
    printf("\nO quociente da divisão entre os numeros %d e %d é %d.", num1, num2, quoc);
    printf("\n\nAgora iremos converter metros para centimetros!");
    printf("\nDigite uma distancia para a conversão: ");
    scanf("%f", &m);
    
    cm= m*100;
    
    printf("\n%.2f metros é igual a %.2f centimetros.", m, cm);
    
    printf("\n\nAgora iremos fazer a média aritmética de 2 numeros!");
    printf("\nDigite um numero: ");
    scanf("%f", &numero1);
    
    printf("\nDigite outro numero: ");
    scanf("%f", &numero2);
    
    med= (numero1+numero2)/2;
    
    printf("A média aritmética entre %.2f e %.2f é igual a %.2f", numero1, numero2, med);
    
    return 0;
}
