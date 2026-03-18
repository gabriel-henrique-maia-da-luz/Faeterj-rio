/******************************************************************************

//1) a = (14 - Mes) / 12
//2) y = Ano - a
//3) m = Mes + 12a - 2
//4) q = Dia + 31m/12 + y + y/4 - y/100 + y/400
//5) d = q % 7 (resto da divisão por 7)


//d = 0 → domingo
//d = 1 → segunda-feira
//d = 2 → terça-feira
//d = 3 → quarta-feira
//d = 4 → quinta-feira
//d = 5 → sexta-feira
//d = 6 → sábado

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int NumeroDiadaSemana (int dia, int mes, int ano)
{
    int d, a, y, m, q;
    
    a = (14 - mes) / 12;
    y = ano - a;
    m = mes + 12*a - 2;
    q = dia + 31*m /12 + y + y/4 - y/100 + y/400;
    d = q%7;
    
    return d;
}



char* DiadaSemana (int dia, int mes, int ano)
{
    int d=NumeroDiadaSemana(dia, mes, ano);
    
    if (d==0){
        return "Domingo";
    } else if (d==1){
        return "Segunda-feira";
    } else if (d==2){
        return "Terça-feira";
    } else if (d==3){
        return "Quarta-feira";
    } else if (d==4){
        return "Quinta-feira";
    } else if (d==5){
        return "Sexta-feira";
    } else if (d==6){
        return "Sábado";
    }
    
    return "";
}




bool ehFinaldeSemana (int dia, int mes, int ano)
{
    char* let= DiadaSemana(dia, mes, ano);
    
    printf ("%s", let);
    
    if (strcmp(let, "Sábado") == 0){
        return true;
    } else if (strcmp(let, "Domingo") == 0){
        return true;
    } else {
        return false;
    }
}


int TercaOuQuinta (int dia, int mes, int ano)
{
    char* j=DiadaSemana (dia, mes, ano);
    
    if (strcmp(j, "Terça-feira") == 0){
        printf("\nDelícia, Hoje tem Prog1 e também que terá teste.\n");
    } else if (strcmp(j, "Quinta-feira") == 0){
        printf("\nDelícia, Hoje tem Prog1\n");
    }
    
    return 0;
}



int DiaUtil (int dia, int mes, int ano)
{
    bool sd=ehFinaldeSemana (dia, mes, ano);
    
    if (sd==true){
        printf("\nFinal de Semana");
    } else if (sd==false){
        printf("\nDia Útil");
    }
    
    return 0;
}



int main()
{
    int dia, mes, ano;
    
    printf("Qual é a data de hoje (xx/yy/zzzz): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    TercaOuQuinta (dia, mes, ano);
    DiaUtil (dia, mes, ano);

    return 0;
}
