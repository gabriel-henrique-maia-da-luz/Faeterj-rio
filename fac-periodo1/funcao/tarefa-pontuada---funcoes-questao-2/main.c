/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


//Exercício 2 - Volume de uma Caixa com Compartimentos

//Você foi contratado para criar um programa que calcula o volume total de uma caixa d'água que
//possui divisórias internas. A caixa principal tem formato retangular, mas contém dois
//compartimentos internos que ocupam espaço e devem ser descontados do volume total.

//Dado: As medidas estão em metros e o volume final deve ser mostrado em litros (1m3 = 1000 litros).



//Funções Exigidas:
//      float volumeParalelepipedo(float comprimento, float largura, float altura)
//Calcula e retorna o volume de um paralelepípedo qualquer. 
//Será usada tanto para a caixa principal quanto para os compartimentos internos.
//      float converterParaLitros(float volumeM3) - Recebe o volume em m3 e retorna em litros.



//O programa deve:
//1. Pedir ao usuário as dimensões da caixa principal (comprimento, largura, altura)
//2. Perguntar quantos compartimentos internos existem (máximo 3)
//3. Para cada compartimento, pedir suas dimensões (comprimento, largura, altura)
//4. Utilizar a função volumeParalelepipedo para calcular o volume da caixa principal
//5. Utilizar a MESMA função para calcular o volume de CADA compartimento
//6. Somar todos os volumes dos compartimentos e subtrair do volume total
//7. Converter o resultado para litros usando a função converterParaLitros
//8. Exibir o volume útil da caixa em litros





float volumeParalelepipedo(float comp, float larg, float alt){
    float volume= comp*larg*alt;
    
    return volume;
}




float converterParaLitros(float volume){
    float litros= volume*1000;
    
    return litros;
}







int main()
{
    float comp, larg, alt, compInt, largInt, altInt;
    float volPrincip, volInt, volRest, litros;
    int qntInt;
    
    printf("Digite as dimensões da caixa principal (comprimento, largura, altura), respectivamente: ");
    scanf("%f %f %f", &comp, &larg, &alt);
    
    printf("\nDigite quantos compartimentos internos existem (máximo 3): ");
    scanf("%i", &qntInt);
    
    
    if (qntInt<=3){
        printf("\nDigite as dimensões dos compartimentos(comprimento, largura, altura), respectivamente: ");
        scanf("%f %f %f", &compInt, &largInt, &altInt);
        
    } else {
        printf("\nNúmero inválido.");
        
        return 0;
    }
    
    
    volPrincip= volumeParalelepipedo(comp, larg, alt);
    volInt= volumeParalelepipedo(compInt, largInt, altInt) * qntInt;
    volRest= volPrincip - volInt;
    
    litros= converterParaLitros(volRest);
    
    printf("\nO volume útil da caixa, em litros, é %.2f L", litros);
    
    return 0;
}