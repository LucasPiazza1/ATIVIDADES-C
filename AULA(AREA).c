#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// area do circulo
	float raio, area, raioquadrado;
	
	printf("Escreva o Raio: \n");
	scanf("%f", &raio);
	
	raioquadrado = raio * raio;
	area = pi * raioquadrado;
	
	printf("A area do circulo de raio %f = %f \n", raio, area);

// area do trapezio
	
	float altura, baseM, basem, A;
	
	printf("\nEscreva a altura:  \n");
	scanf("%f", &A);
	
	printf("Escreva a base maior: \n");
	scanf("%f", &baseM);
	
	printf("Escreva a base menor: \n");
	scanf("%f", &basem); 
	
	A = ((baseM + basem) * A)/2;
	
	printf("A area do trapezio é %f", A);
	
	return 0;
}
