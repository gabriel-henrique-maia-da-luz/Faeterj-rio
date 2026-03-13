/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int marca, tam, qnt;
    
    printf("Digite (1) para NESTLÉ, (2) para LACTA e (3) para GAROTO: ");
    scanf("%i", &marca);
    
    printf("Digite o tamanho dos Ovos de Páscoa: ");
    scanf("%i", &tam);
    
    printf("Digite a quantidade de Ovos que deseja: ");
    scanf("%i", &qnt);
    
    if (qnt>8){
        printf("transporte grátis.");
        
    } else if (marca==1){
        if(qnt<=5){
            printf("10%% de desconto");
            
        } else {
            printf("20%% de desconto.");
        }
    } else if (marca==2){
        if (qnt>3 && tam>=21){
            printf("10%% de desconto");
            
        } else if (qnt>3 && tam<21){
            printf("5%% de desconto");
            
        } else {
            printf("0%% de desconto");
        }
    } else if (marca==3){
        if (tam>=21){
            printf("15%% de desconto");
            
        } else {
            printf("7%% de desconto");
        }
    }
    
    return 0;
}