
//Trabalho feito pelo:
//Gabriel Henrique Maia da Luz
//Tales Florencio de Farias


#include <stdio.h>

//2. Um estacionamento cobra conforme o tipo de veículo e tempo de permanência:

//Carro: R$ 5,00 por hora
//Moto: R$ 3,00 por hora
//Caminhão: R$ 8,00 por hora

//Se o tempo for maior que 3 horas, tem 10% de desconto no total.
//Caminhões com carga perigosa ( perguntado ao usuário: 1-S/ 2-N), tem acréscimo de 20%

//Faça um programa que leia: tipo de veículo (1-carro, 2-moto, 3-caminhão), horas estacionado
//e exiba o valor final. A pergunta se e tem carga perigosa deve ser feita só para caminhões.

int main()
{
    int tipo, horas, sn;
    float tot;
    
    
    printf("Que veiculo está usando (1-carro, 2-moto, 3-caminhão)? ");
    scanf("%i", &tipo);
    
    printf("Em quantas horas você está estacionar? ");
    scanf("%i", &horas);
    
    
    if (tipo==1){
        tot=horas*5;
        
    } else if (tipo==2){
        tot=horas*3;
        
    } else{
        tot=horas*8;
        
        printf("O caminhão tem carga perigora (1-Sim/ 2-Não)? ");
        scanf("%i", &sn);
        
        if (sn==1){
            tot=tot+(tot*0.2);    
            
        }
    }
    
    if (horas>3){
        tot=tot-(tot*0.1);
        
    }
    
    printf("O valor total é de R$%.2f", tot);
    
    return 0;
}