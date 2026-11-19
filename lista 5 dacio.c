#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//exercicio1
	
	int vetores[100];
	int i,j,aux;
	// Ler os 100 numeros
    for (i = 0; i < 100; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetores[i]);
    }
     // Imprimir na ordem inversa
    printf("\nOrdem inversa: \n");

    for (i = 99; i >= 0; i--) {
        printf("%d\n", vetores[i]);
    }
    // Colocar do maior para o menor
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (vetores[i] < vetores[j]) {
                aux = vetores[i];
                vetores[i] = vetores[j];
                vetores[j] = aux;
            }
        }
    }
    // Imprimir ordenado
    printf("\nDo maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d\n", vetores[i]);
    }


	
	
	//exercicio 2
	int primeiroV;
	float resultado;
	double numeroD;
	
	printf("Insira o valor:  ");
	scanf("%d", &primeiroV);
	
	numeroD = primeiroV + primeiroV;
	resultado = numeroD * pow(10,4);
	
	printf("Resultado em double:  %f", numeroD);
	
	printf("\nO numero em notação cientifica: %lf  ", resultado);
	


//exercicio 3

	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("\n""Insira o valor a ser convertido:   ");
	scanf ("%d", &n);
	//% 2 pega o resto da divisão por 2; /2 faz a divisão inteira por 2.



	
	bit_64 = n%2; //0
	res = n/2; //32
	
	bit_32 = res%2; //0
	res = res/2; //16
	
	bit_16 = res%2;//0
	res = res/2;//8
	
	bit_8 = res%2;//0
	res = res/2;//4
	
	bit_4 = res%2;//0
	res = res/2;//2
	
	bit_2 = res%2;//0
	res = res/2;//1
	//1/2 = 0 e 1
	
	printf ("O numero %d em binario = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	//exercicio 4
		int maior;
	    int vetor[10];
	    
		int calcula_maior(int a, int b) {
		   if (a > b) {
		       return a;
		   } else {
		       return b;
		    }
		}
		
		printf("\nDigite 10 numeros:\n");
		
		
		for (i = 0; i < 10; i++) {
		       printf("Numero %d: ", i + 1);
		       scanf("%d", &vetor[i]);
		    }
		
		for (i = 1, maior = vetor[0]; i < 10; i++) {
		        maior = calcula_maior(maior, vetor[i]);
		    }
		
		printf("\n%d e o maior\n", maior);
		
		//exercicio 5 
		int vet[100];
		
		
		for (i= 0;i<100;i++){
			scanf("%d", &vet[i]);
		}
		 for ( i = 0; i < 100; i++) {
			if (vet[i]%2 == 0 ){
			printf("%d: Par\n",vet[i]);
		}
			else{
				printf("%d: Impar\n", vet[i]);
			}
		}
		//exercicio 6
		int x1[10],y1[10],x2[10],y2[10]; 
		int diferenca;
		
		printf("Insira o x1:  ");
		scanf("%d",&x1[i]);
		
		printf("Insira o y1:  ");
		scanf("%d",&y1[i]);
		
		printf("Insira o x2:  ");
		scanf("%d",&x2[i]);
		
		printf("Insira o y2:  ");
		scanf("%d",&y2[i]);
		
		diferenca = sqrt(pow(x2[i]-x1[i],2)+pow(y2[i]-y1[i],2));
		
		printf("A diferença é igual : %d", diferenca);
		
		//exercicio 7
		
		int numero [100];
		int encontrou = 0;
		
		for(i = 0; i<100;i++){
			printf("\nInsira um numero:  ");
			scanf("%d", &numero[i]);
		}
		
		//verificar quais são consecutivos
		for(i=0; i<99;i++){
			if (vet[i+1]== vet[i+1]){
				 printf("%d e %d sao consecutivos\n", vet[i], vet[i + 1]);
				 encontrou = 1;
			}
		}
		 if (encontrou == 0) {
        printf("Nao existem numeros consecutivos.");
    }
		
		
		
		
		
		
	return 0;
	
		
	}
   

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
