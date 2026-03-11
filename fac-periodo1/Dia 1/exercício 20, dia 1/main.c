/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Leia o tamanho d0 arquivo (MB), a velocidade de download (MB/s) e a velocidade de upload (MB/s)
//Calcule e exiba: tempo de download (s) e tempo de upload (s).

int main()
{
    float tam, vel_down, vel_up, tempo_down, tempo_up;
    
    printf("Digite o tamanho do arquivo, em Mb: ");
    scanf("%f", &tam);
    
    printf("Digite a velocidade de download, em Mb/segundo: ");
    scanf("%f", &vel_down);
    
    printf("Digite a velocidade de upload, em Mb/segundo: ");
    scanf("%f", &vel_up);
    
    tempo_down= tam/vel_down;
    tempo_up= tam/vel_up;
    
    printf("\nO tempo de download é de %.2f segundos e o tempo de upload é de %.2f segundos.", tempo_down, tempo_up);
    
    return 0;
}
