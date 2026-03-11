/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//31. Leia três medições de temperatura e mostre a média.
//34. Leia o número de páginas e o custo por página, e mostre o valor total.
//35. Leia a área de um terreno e o preço total, e mostre o preço por metro quadrado.

int main()
{
    float temp1, temp2, temp3, med, num, custopag, final, area, tot, preco_metro;
    
    printf("Diga o 1° número: ");
    scanf("%f", &temp1);
    
    printf("Diga o 2° número: ");
    scanf("%f", &temp2);
    
    printf("Diga o 3° número: ");
    scanf("%f", &temp3);
    
    med= (temp1+temp2+temp3)/3;
    
    printf("A média desses três números é %.2f\n", med);
    
    printf("\nQuantidade de página: ");
    scanf("%f", &num);
    
    printf("Custo por página: ");
    scanf("%f", &custopag);
    
    final= num*custopag;
    
    printf("Valor total: R$%.2f.\n", final);
    
    printf("\nDigite o valor total a pagar: ");
    scanf("%f", &tot);
    
    printf("Digite a área do tereno, em metro²: ");
    scanf("%f", &area);
    
    preco_metro= tot/area;
    
    printf("Valor por metro²: R$%.2f/m²", preco_metro);
    
    return 0;
}
