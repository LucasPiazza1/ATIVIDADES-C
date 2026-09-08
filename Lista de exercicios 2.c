#include<stdio.h>

void ex1(){
	
	int idade, ano_atual, mes_atual, mes_nascido, ano_nascimento;
	printf("--- exercicio 1 ---\n");
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	printf("Qual mes voce nasceu: \n");
	scanf("%d", &mes_nascido);
	printf("Digite seu ano atual: \n");
	scanf("%d", &ano_atual);
	printf("Digite seu mes atual: \n");
	scanf("%d", &mes_atual);
	
	ano_nascimento = ano_atual - idade;
	
	if(mes_atual < mes_nascido){
		ano_nascimento--;
		printf("Seu ano de nascimento: %d", ano_nascimento);
	}
	else{
		
		printf("Seu ano de nascimento: %d", ano_nascimento);
	}
	
}
void ex2(){
	float km, m;
	printf("--- exercicio 2 ---\n");
	printf("Digite sua velocidade em km/h: \n");
	scanf("%f", &km);
	
	m = km / 36;
	
	printf("Sua velocidade é de %.2f e em m/s e de: %.2f", km, m);
}
void ex3(){
	float valor, cot, valor_dolar;
	printf("--- exercicio 3 ---\n");
	printf("Me de um valor: \n");
	scanf("%f", &valor);
	printf("Me de a cotaçao atual: \n");
	scanf("%f", &cot);
	
	valor_dolar = valor * cot;
	
	printf("Seu valor convertido em dolar é de: %.2f \n", valor_dolar);
}
void ex4(){
	float cel, fah;
	printf("--- exercicio 4 ---\n");
	printf("Me de a temperatura em Graus Celsius: \n");
	scanf("%f", &cel);
	
	fah = cel * (9.0/5.0) + 32.0;
	
	printf("A temperatura em Graus Celsius para Fahrenheit é de: %.2f", fah);
	
}
int main(){
	int ex;
	
	printf("Escolha o exercicio: 1,2,3,4,5,6,7,8,9,10 \n");
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
	}
	}
