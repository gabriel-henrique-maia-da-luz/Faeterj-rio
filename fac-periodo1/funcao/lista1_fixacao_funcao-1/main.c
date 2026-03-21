/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Exemplo 1 - Sistema de Ingressos de Cinema

//Contexto: Você está desenvolvendo o caixa de um cinema. 

//O sistema precisa calcular o valor final a ser pago por um cliente, 
//aplicando descontos dependendo de quem está comprando 
//(Estudante tem 50% de desconto, Idoso tem 60%, Cliente Fidelidade tem 30%). 

//Erro comum: Criar funções como calcularPrecoEstudante(), calcularPrecoIdoso().


//Funções Exigidas:

//1. float calcularPrecoFinal(float precoBase, float percentualDesconto) - 
//Recebe o preço padrão do ingresso e a porcentagem de desconto a ser aplicada,
//retornando o valor a pagar. (Dica: se não houver desconto, o percentual é 0).

//O programa deve:
//1. Pedir o valor base do ingresso atual.
//2. Perguntar ao usuário qual a categoria do cliente 
//(1- Inteira, 2- Estudante, 3- Idoso, 4- Fidelidade).
//3. Baseado na escolha, definir o percentual de desconto em uma variável (0, 50, 60 ou 30).
//4. Chamar a função calcularPrecoFinal passando os valores.
//5. Exibir o valor final que o cliente deve pagar.

//Por que essa versão é melhor?
//Se o cinema decidir criar uma promoção temporária de "Terça-feira Maluca" com 40% de
//desconto, você não precisa criar uma nova função calcularPrecoTerca(). 
//Basta passar 40 como parâmetro para a função que já existe.

float calcularPrecoFinal(float preco, float percent){
    
    float final=preco-(preco*percent);
    
    return final;
}



int main()
{
    float preco, percent, tot;
    int categ;
    
    printf("Qual é o valor do ingresso? R$");
    scanf("%f", &preco);
    
    printf("\nDigite a sua categoria:\n(1-Inteira, 2-Estudante, 3-Idoso, 4-Fidelidade) ");
    scanf("%i", &categ);
    
    if (categ==1){
        percent=0;
        
    } else if (categ==2){
        percent=0.5;
        
    } else if (categ==3){
        percent=0.6;
        
    } else {
        percent=0.3;
        
    }
    
    tot=calcularPrecoFinal(preco, percent);
    
    printf("\nValor a pagar: R$%.2f", tot);
    
    
    return 0;
}