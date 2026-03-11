/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float nota1, nota2, media;
    
    printf("Quais foram suas notas? ");
    scanf("%f %f", &nota1, %nota2); 
    
    media= (nota1+nota2)/2;
    
    printf("\nMédia: %.2f\n\n", media);
    
    if (media>=6){
        if (media>=8){
            printf("Gostaria de ser Monitor? ");
        } else{
        printf("Parabens!!");   
        }
        
    } if (media>=3){
        printf("Não aprovado (Necessita fazer a final)");
    } else{
        printf("Reprovado.");
    }
    return 0;
}