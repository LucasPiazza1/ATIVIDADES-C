#include<stdio.h>
//faça um programa que leia 10 numeros e que leia os 5 numeros e fale qual é maior e os outros 5 restantes qual é o menor
int compara (int a, int b){
	if(a>b){
		return a;
	}
	
	else{
		return b;
	}
	
}
int main(int argc, char *argv[]) {
    int valores[10];
    valores[0] = 6;
    int maior, menor, i;

    printf("Vamos ler os valores \n");
    // PARA ( INICIAL, CONDIÇÃO, INCREMENTO)
    for(i=0; i<10; i++){
        scanf("%d", &valores[i]);
    }
	maior = valores[0];
    for(i=1, maior = valores[0]; i<5; i=i+2){
	int comp_temp = compara(valores[i], valores[i+1]);
	maior = compara(maior, comp_temp);
	
	printf("\n %d", maior);
		
}
return 0;
}
