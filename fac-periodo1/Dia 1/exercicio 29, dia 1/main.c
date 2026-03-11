/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia nota1, nota2 e a média alvo
//Calcule e exiba: média atual e nota necessária na 3ª avaliação para atingir a média alvo.

int main()
{
    float nota1, nota2, med_alvo, med_atual, dif;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a média que você quer alcançar: ");
    scanf("%f", &med_alvo);
    
    med_atual= (nota1+nota2)/3;
    dif= (med_alvo - med_atual)*3;
    
    printf("\nA sua média atual é %.2f\nPara alcançar a média %.2f, você precisará tirar, no minimo, %.2f", med_atual, med_alvo, dif);
    
    return 0;
}
