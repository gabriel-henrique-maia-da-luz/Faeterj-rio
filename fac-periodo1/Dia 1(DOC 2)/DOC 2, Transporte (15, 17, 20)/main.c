/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//15. Leia o custo total de um táxi e a quantidade de passageiros, e mostre quanto cada um paga.
//17. Leia o horário de saída (em horas) e a duração da viagem (em horas), e mostre o horário estimadode chegada.
//20. Leia o valor por hora e o tempo estacionado, e mostre o valor a pagar.

int main()
{
    float custo_tot, qnt, custo_indiv, rs_hora, tempo, valor;
    int duracao, min, h, h_chegada, min_chegada;
    
    printf("Qual foi o custo total? ");
    scanf("%f", &custo_tot);
    
    printf("Qual é a quantidade de pessoas que irão dividir a conta? ");
    scanf("%f", &qnt);
    
    custo_indiv= custo_tot/qnt;
    
    printf("Cada um terão que pagar R$%.2f\n", custo_indiv);
    
    printf("\nHoras: ");
    scanf("%i", &h);
    
    printf("Minutos: ");
    scanf("%i", &min);
    
    printf("Demora quantos minutos para chegar até o destino? ");
    scanf("%d", &duracao);
    
    min_chegada= duracao%60;
    while(min_chegada>=100){
        min_chegada/=10;
    }
    min_chegada= min_chegada+min;
    
    h_chegada= (duracao/60)+h;
    if(min_chegada>=60){
        h_chegada= h_chegada + 1;
    }
    
    if(min_chegada>=60){
        min_chegada-=60;
    }
    
    printf("\nVocê irá chegar em, aproximadamente, %ih e %imin.\n\n", h_chegada, min_chegada);
    
    printf("Qual é o valor por hora? ");
    scanf("%f", &rs_hora);
    
    printf("Quanto tempo, em horas, você ficou? ");
    scanf("%f", &tempo);
    
    valor= rs_hora*tempo;
    
    printf("Em %.0f horas, você terá que pagar R$%.2f.", tempo, valor);
    
    return 0;
}
