
//Trabalho feito pelo:
//Gabriel Henrique Maia da Luz
//Tales Florencio de Farias


#include <stdio.h>

//Uma loja de roupas online oferece frete com descontos baseados na categoria do produto
//forma de pagamento e quantidade:

//Categoria "Camisas": até 3 unidades ⇒ frete 15% do valor
//Categoria "Camisas": acima de 3 unidades ⇒ frete grátis
//Categoria "Calças": pagamento no PIX ⇒ 20% desconto no frete
//Categoria "Calças": pagamento no cartão ⇒ 5% desconto no frete
//Categoria "Vestidos": avaliação do produto ⭐

//▪ Se avaliação for 4 ou 5 estrelas ⇒ frete 10% do valor
//▪ Se avaliação for menor que 4 ⇒ frete 25% do valor

//Regra especial: Qualquer compra acima de R$ 500,00 ⇒ frete grátis independente das outras regras

//Faça um programa que leia: valor da compra, categoria (1-camisas, 2-calças, 3-vestidos),
//quantidade de peças, forma de pagamento (1-PIX, 2-cartão, 3-dinheiro) e avaliação do produto
//(1 a 5 estrelas, apenas para vestidos). O programa deve calcular e exibir o valor do frete.


int main()
{
    int categ, pag, qnt, aval;
    float valor, tot, frete;
    
    printf("Qual foi o valor final da compra?");
    scanf("%f", &valor);
    
    printf("Qual é a categoria dos produtos?\n(1-Camisa, 2-Calça, 3-Vestido");
    scanf("%i", &categ);
    
    printf("Qual é a forma de pagamento?\n(1-Pix, 2-Cartão)");
    scanf("%i", &pag);
    
    printf("Quantas unidades irá comprar? ");
    scanf("%i", &qnt);
    
    if (valor>500){
        frete=0;
        
    } else if (categ==1){
        
        if (qnt<=3){
            frete=valor*0.15;
            
        } else {
            frete=0;
            
        }
        
    } else if (categ==2){
        
        if (pag==1){
            frete=valor*0.2;
            
        } else {
            frete=valor*0.05;
            
        }
        
    } else {
        
        printf("Qual é a avaliação do produto (De 0 a 5)? ");
        scanf("%i", &aval);
        
        if (aval>=4){
            frete=valor/10;
            
        } else {
            frete=valor/4;
            
        }
        
    }
    
    tot=valor+frete;
    
    printf("Valor do frete: %.2f\nValor total: %.2f", frete, tot);
    
    
    return 0;
}
