/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

//Faça um programa que pergunte ao usuário as coordenadas x e y de um ponto. 
//Mostre a distância deste ponto ao centro (0,0) 
//e o número de seu quadrante (1,2,3 ou 4)

//Quadrante:
//1º: x>0, y>0;
//2º: x<0, y>0;
//3º: x<0, y<0;
//4º: x>0, y<0;


int main()
{
    float x, y, dist, quadrante;
    
    printf("Digite as coordenadas (X, Y): ");
    scanf("%f%f", &x, &y);
    
    dist=sqrt((x*x)+(y*y));
    
    if (x>0) {
        if (y>0){
            quadrante=1;
        } else {
            quadrante=4;
        }
    } else {
        if (y>0){
            quadrante=2;
        } else {
            quadrante=3;
        }
    }
    
    printf("A distância do ponto (%.2f, %.2f) ao centro (0,0) é %.2f\n", x, y, dist);
    printf("e o número de seu quadrante é %.0f", quadrante);

    return 0;
}