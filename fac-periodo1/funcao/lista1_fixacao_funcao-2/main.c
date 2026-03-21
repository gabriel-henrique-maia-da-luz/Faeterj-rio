/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Exemplo 2 - Calculadora de Consumo de Energia

//Contexto: Um aplicativo quer ajudar os usuários a descobrirem
//quais aparelhos da casa gastam mais energia no final do mês.
//Erro comum: Criar funções engessadas como calcularGastoGeladeira(), calcularGastoChuveiro().

//Funções Exigidas:

//1. float calcularConsumoKWh(float potenciaWatts, float horasDeUsoMensal)
//Calcula e retorna o consumo em Quilowatts-hora (fórmula: (potencia * horas) / 1000).

//2. float calcularCustoMonetario(float consumoKWh, float tarifaEnergia)
//Transforma o consumo em Reais (R$), multiplicando o consumo pela 
//tarifa da concessionária de energia local.


//O programa deve:
//1. Perguntar o valor da tarifa de energia (R$ por kWh) na cidade do usuário.
//2. Perguntar do aparelho: a potência (em Watts) e quantas horas ele fica ligado no mês.
//3. Chamar as funções para calcular o consumo e o custo de cada aparelho,
//somando os resultados em um totalizador.
//4. Exibir o valor total estimado da conta de luz no final do mês.

//Por que essa versão é melhor?
//Permite que o usuário calcule o gasto de qualquer aparelho elétrico do mundo 
//(desde uma lâmpada até um carro elétrico), contanto que ele saiba a potência
//e o tempo de uso.


float calcularConsumoKWh(float pot, float hora){
    //Calcula e retorna o consumo em Quilowatts-hora 
    //(fórmula: (potencia * horas) / 1000).
    
    float consum=(pot*hora)/1000;
    
    return consum;
}


float calcularCustoMonetario(float pot, float hora, float tarifa){
    //Transforma o consumo em Reais (R$),
    //multiplicando o consumo pela tarifa da concessionária de energia local.
    
    float consumo = calcularConsumoKWh(pot, hora);

    float reais = consumo*tarifa;
    
    return reais;
}




int main()
{
    float tarifa, pot, hora, tot;
    
    printf("Qual o valor da tarifa de energia (R$ por kWh) na sua cidade? ");
    scanf("%f", &tarifa);
    
    printf("Qual a potência (em Watts) do aparelho? ");
    scanf("%f", &pot);
    
    printf("Quantas horas ele fica ligado no mês? ");
    scanf("%f", &hora);
    
    tot= calcularCustoMonetario(pot, hora, tarifa);
    
    printf("O valor total estimado da conta de luz no final do mês é R$%.2f", tot);
    
    return 0;
}
