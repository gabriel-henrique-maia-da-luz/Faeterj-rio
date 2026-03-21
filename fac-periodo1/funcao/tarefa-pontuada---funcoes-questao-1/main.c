/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Exercício 1 - Calculadora de Azulejos (Versão Otimizada)

//Contexto: Você foi contratado para criar um programa que calcula a quantidade de azulejos
//necessários para revestir uma parede. O programa deve ser flexível o suficiente para descontar
//a área de vãos vazios (como portas, janelas, ou passagens), caso existam. Dado: Cada azulejo
//padrão mede 60cm x 60cm (cobrindo uma área de 0,36 m2).


//Funções Exigidas: Em vez de funções repetitivas, crie funções genéricas e reaproveitáveis:

//  1. float calcularArea(float altura, float largura) - 
//Calcula e retorna a área de um retângulo qualquer. 
//Será usada tanto para a parede quanto para os vãos.

//  2. int calcularQuantidadeAzulejos(float areaLiquida) - 
//Recebe a área final a ser revestida e retorna a quantidade de azulejos necessários, 
//garantindo que o valor seja arredondado para cima 
//(afinal, não se compra "meio" azulejo na loja).




//O programa deve:

//      1. Pedir ao usuário a altura e a largura totais da parede.

//      2. Perguntar se a parede possui algum vão a ser descontado (porta, janela, etc.).

//      3. Se houver vãos, perguntar quantas portas e as medidas de uma porta e quantas
//janelas e as medidas (altura e largura.) de uma janela. Todas as portas tem mesma
//dimensão. Todas as janelas, também tem mesma dimensão

//      4. Utilizar a função calcularArea calcular a área da parede e a área de cada vão, subtraindo
//os vãos da área total para encontrar a área líquida.

//      5. Exibir na tela a área líquida (em m2).

//      6. Chamar a função calcularQuantidadeAzulejos e exibir o número exato de azulejos que
//o cliente precisa comprar.



float calcularArea(float alt, float larg){
    
    float area=alt*larg;
    
    return area;
}



int calcularQuantidadeAzulejos(float areaLiq){
    
    int qnt= areaLiq/0.36;
    
    if (areaLiq/0.36 > qnt){
        qnt++;
        
    }
    
    return qnt;
}




int main()
{
    float alt, larg, altJan=0, largJan=0, altPorta=0, largPorta=0;
    float areaParede, areaJan=0, areaPorta=0, areaLiq=0;
    int sn, qntPorta=0, qntJan=0, qntPiso=0;
    
    printf("Qual a altura e a largura totais da parede, respectivamente? ");
    scanf("%f%f", &alt, &larg);
    
    printf("A parede possui algum vão a ser descontado (porta, janela, etc.)?\nobs: 1-sim, 0-não  ");
    scanf("%i", &sn);
    
    if (sn==1){
        printf("\nQuantas portas e janelas tem, respectivamente? ");
        scanf("%i %i", &qntPorta, &qntJan);
        
        if (qntPorta>0){
            printf("\nDigite as medidas (altura e largura, respectivamente) das portas: ");
            scanf("%f %f", &altPorta, &largPorta);
        }
        if (qntJan>0){
            printf("\nDigite as medidas (altura e largura, respectivamente) das janelas: ");
            scanf("%f %f", &altJan, &largJan);
        }
        
        areaJan= calcularArea(altJan, largJan)*qntJan;
        areaPorta= calcularArea(altPorta, largPorta)*qntPorta;
        
    }
    
    areaParede= calcularArea(alt, larg);
    
    areaLiq= areaParede-(areaJan+areaPorta);
    
    qntPiso=calcularQuantidadeAzulejos(areaLiq);
    
    printf("\n\nÁrea Liquida: %.2f m²\nQuantidade de azulejos necessária: %i", areaLiq, qntPiso);
    
    return 0;
}
