/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//23. Leia o peso de uma pessoa e mostre quantos litros de água ela deve beber por dia (35 ml por kg).
//24. Leia a distância e o tempo, e mostre a velocidade média.
//28. Leia o consumo em kWh e o valor do kWh, e mostre o valor a pagar.

int main()
{
    float peso, ml, litros, km, tempo, veloc, consumo, valor, tot;
    
    printf("Qual é o seu peso, em kg? ");
    scanf("%f", &peso);
    
    ml= peso*35;
    litros= ml/1000;
    
    printf("Você precisa beber %.2f ml de água por dia (%.2f litros/dia)", ml, litros);
    
    
    printf("\n\nDistância (km): ");
    scanf("%f", &km);
    
    printf("Tempo (hora): ");
    scanf("%f", &tempo);
    
    veloc= km/tempo;
    
    printf("Velocidade média: %.2fkm/h", veloc);
    
    
    printf("\n\nConsumo em kWh: ");
    scanf("%f", &consumo);
    
    printf("Valor do kWh: ");
    scanf("%f", &valor);
    
    tot= consumo*valor;
    
    printf("Valor total a pagar: R$%.2f", tot);
    
    return 0;
}
