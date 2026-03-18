/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//4. Nota com bônus: Se nota >= 6, adicionar 0.5 se presença >= 90
//e mais 0.5 se entregou trabalho. Caso contrário, não alterar nota.


int main()
{
    float nota;
    int pre, trab;
    
    printf("Qual é a sua nota? ");
    scanf("%", &nota);
    
    printf("Quanto de presença você tem? ");
    scanf("%", &pre);
    
    printf("Digite (1) se entregou trabalho e (0) se não: ");
    scanf("%", &trab);
    
    if (nota>=6){
        if (pre>=90){
            nota=nota+0.5;
        }
        if (trab==1){
            nota=nota+0.5;
        }
    }
    
    printf("Nota final: ", nota);
    
    return 0;
}
