/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o peso (kg), a altura (m) e um IMC alvo.
//Calcule e exiba: IMC atual e peso correspondente ao IMC alvo (kg).

int main()
{
    float peso, alt, imc_alvo, imc_atual, peso_alvo;
    
    printf("Qual é o seu peso hoje, em kg? ");
    scanf("%f", &peso);
    
    printf("Qual é a sua altura hoje, em metros? ");
    scanf("%f", &alt);
    
    printf("Qual é o IMC que você deseja alcançar? ");
    scanf("%f", &imc_alvo);
    
    imc_atual= peso/(alt*alt);
    peso_alvo= imc_alvo*(alt*alt);
    
    printf ("O seu IMC atual é %.1f\nPara você alcançar o IMC que você deseja (%.1f) você deverá pesar %.2f quilos.", imc_atual, imc_alvo, peso_alvo);

    return 0;
}
