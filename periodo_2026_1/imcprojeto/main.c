#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Qual é o seu peso? \n");
    scanf("%f", &peso);
    
    printf("\nQual é a sua altura? \n");
    scanf("%f", &altura);
    
    imc=peso/(altura*altura);
    
    if(imc<18.5){
        printf("\nO seu IMC é de %.2f, o que indica que você está abaixo do peso ideal.", imc);
        
    } else if(imc>=18.5 && imc<25){
        printf("\nO seu IMC é de %.2f, o que indica que você está com o peso ideal.", imc);
        
    } else if(imc>=25 && imc<30){
        printf("\nO seu IMC é de %.2f, o que indica que você está com sobrepeso.", imc);
        
    } else if(imc>=30 && imc<35){
        printf("\nO seu IMC é de %.2f, o que indica que você está com obesidade grau 1.", imc);
        
    } else if(imc>=35 && imc<40){
        printf("\nO seu IMC é de %.2f, o que indica que você está com obesidade grau 2.", imc);
        
    } else {
        printf("\nO seu IMC é de %.2f, o que indica que você está com obesidade grau 3.", imc);
    }
    
    return 0;
}