/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//O Comitê Olímpico Internacional pretende premiar os países
//de acordo com o número de medalhas que conquistou.
//Seguindo as tabelas, a seguir, faça um programa em C que leia 
//a quantidade de medalhas conquistadas (ouro, prata e bronze) por um país,
//calcule e exiba o valor do prêmio ganho.

//O cálculo da pontuação segue a tabela abaixo:
//Ouro: 6
//Prata: 3
//Bronze: 1

int main()
{
    int ouro, prata, bronze, tot;
    
    printf("A quantidade de medalhas conquistadas (ouro, prata e bronze, respectivamente): ");
    scanf("%i%i%i", &ouro, &prata, &bronze);
    
    tot= (ouro*6)+(prata*3)+(bronze);
    
    printf("\nA sua pontuação total foi de %i pontos.", tot);
    
    return 0;
}
