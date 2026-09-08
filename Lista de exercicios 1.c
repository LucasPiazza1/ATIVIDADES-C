#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

void ex1(){
	int num, num1, aux;
	
	printf("--- exercicio 1 ---\n");
	printf("digite um numero: \n");
	scanf("%d", &num);
	printf("digite outro numero: \n");
	scanf("%d", &num1);
	
	aux = num;
	num = num1;
	num1 = aux;
	printf("A ordem inversa: %d , %d", num, num1);
}
	
void ex2(){
	printf("--- exercicio 2 ---\n");
	double valor, A;
	int n;
	
	printf("me de um valor: \n");
	scanf("%f", &valor);
	
	A = valor;
	
	if(A >= 10){
		A = A / 10;
		n++;
}
	else{
		A = A * 10;
		n--;
}
		
	printf("o valor em notaÃ§ao cientifica e: %f ", valor);
	
}

void ex3(){
	
	
	int valor, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("--- exercicio 3 ---\n");
	printf("insira um valor para conversao: \n");
	scanf("%d", &valor);
	
	bit_64 = valor % 2;
	res = valor / 2;
	bit_32 = res % 2;
	res = res / 2;
	bit_16 = res % 2;
	res = res / 2;
	bit_8 = res % 2;
	res = res / 2;
	bit_4 = res % 2;
	res = res / 2;
	bit_2 = res % 2;
	res = res / 2;
	
	printf("O valor de %d em binario Ã©: %d %d %d %d %d %d \n", valor, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	
}
void ex4(){
	float salario, vendas, comissao, total;
	
	printf("--- exercicio 4 ---\n");
	printf("Digite seu salario: \n");
	scanf("%f", &salario);
	printf("Digite o valor de vendas feitas: \n");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.15;
	total = comissao + salario;
	
	if (vendas > 0){
		printf("Seu salario sera de: %.2f e sua comissao em torno das vendas sera de: %.2f totalizando em: %.2f", salario, comissao, total);
	}
	else{
		printf("Seu salario e de: %.2f e nao a comissao por conta das vendas.", salario);
	}
	
	
}
void ex5(){
	
	int num1, num2, num3, num4, soma, media, prod;
	
	printf("--- exercicio 5 ---\n");
	printf("Me de o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Me de o segundo numero: \n");
	scanf("%d", &num2);
	printf("Me de o terceiro numero: \n");
	scanf("%d", &num3);
	printf("Me de o quarto numero: \n");
	scanf("%d", &num4);
	
	soma = num1 + num2 + num3 + num4;
	media = soma / 2;
	prod = num1 * num2 * num3 * num4;
	
	printf("A soma dos numeros Ã©: %d \n", soma);
	printf("A media dos numeros Ã©: %d \n", media);
	printf("O produtorio dos numeros Ã©: %d \n", prod);
}
void ex6(){
	int ano, dia, mes;
	printf("--- exercicio 6 ---\n");
	printf("Me de sua idade: \n");
	scanf("%d", &ano);
	
	mes = ano * 12;
	dia = ano * 365;
	
	printf("Seus anos sao %d, seus meses sao %d, seus dias sao %d", ano, mes, dia);
	
}
void ex7(){
	printf("--- exercicio 7 ---\n");
	float raio, volume, r3;
	printf("Me de o valor do raio:");
	scanf("%f", &raio);
	
	r3 = raio * raio * raio;
	volume = (4/3.0) * pi * r3;
	
	printf("O valor do volume da esfera Ã©: %.2f", volume);
	
}
void ex8(){
	
	int x1, x2, y1, y2, p1, p2;
    float dist;
    
    printf("Insira o valor do par ordenado (x1, y1): ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Insira o valor do par ordenado (x2, y2): ");
	scanf("%d", &x2);
	scanf("%d", &y2);

	p1 = (x2 - x1) * (x2 - x1);
	p2 = (y2 - y1) * (y2 - y1);
	dist = sqrt(p1 + p2);
	printf("A distância é: %f", dist);
		
}

		
int main(){
	
	int ex;
	
	printf("escolha o exercicio 1,2,3,4,5,6,7,8: \n");
	scanf("%d", &ex);
	
	switch(ex){
		
	case 1:
	ex1();
	break;
	
	case 2:
	ex2();
	break;
	
	case 3:
	ex3();
	break;
	
	case 4:
	ex4();
	break;
	
	case 5:
	ex5();
	break;
	
	case 6:
	ex6();
	break;
	
	case 7:
	ex7();
	break;
	
	case 8:
	ex8();
	break;
	
	
	

}
}
