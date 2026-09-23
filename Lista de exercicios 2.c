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
void ex5(){
	float graus, radianos, pi;
	printf("Me de um angulo em graus: \n");
	scanf("%f", &graus);
	
	pi = 3.141592;
	radianos = graus * pi / 180;
	
	printf("O seu valor do angulo em graus é: %.2f e convertido em radiano é: %.2f", graus, radianos);
	
}
void ex6(){
	int num, antecessor, sucessor;

	printf("Digite um número para descobrir seu antecessor e sucessor: ");
	scanf("%d", &num);

	antecessor = num - 1;
	sucessor = num + 1;

	printf("seu numero: %d \n", num);
	printf("Antecessor: %d\n", antecessor);
	printf("Sucessor: %d\n", sucessor);
}
void ex7(){
	
	float primeiro, segundo, terceiro, valor;
	
	printf("Valor a ser dividido R$780.000\n");
	
	valor = 780000;
	
	primeiro = valor * 0.46;
	segundo = valor * 0.32;
	terceiro = valor - (primeiro + segundo);
	
	printf("O primeiro irá receber: R$%.2f\n", primeiro);
	printf("O segundo irá receber: R$%.2f\n", segundo);
	printf("O terceiro irá receber: R$%.2f\n", terceiro);
}
void ex8(){
	int segundos, horas, minutos;
	
	printf("Digite os segundos: \n");
	scanf("%d", &segundos);
	
	horas = segundos  / 3600;
	minutos = (segundos-(horas*3600))/60;
	segundos = segundos -((horas*3600)+(minutos*60));
	
	printf("Horas: %d\n", horas);
	printf("Minutos: %d\n", minutos);
	printf("Segundos: %d\n", segundos);
	
	printf("Valor formatado: %d:%d:%d\n", horas, minutos, segundos);
}
void ex9(){
	float horas1, vel, litros, distancia;
	
	printf("Quanto tempo foi gasto na viagem? ");
	scanf("%f", &horas1);
	
	printf("Digite a velocidade média(km/h): ");
	scanf("%f", &vel);
	
	distancia = horas1 * vel;
	litros = distancia / 12;
	
	printf("A distância percorrida foi: %.3f km/h\n", distancia);
	printf("Litros que serão gastos na viagem: %.3f\n", litros);
}
void ex10(){
int a, b, c, maior_temp, maior;
printf("Insira os valores a serem comparados: ");
scanf("%d %d %d", &a, &b, &c);
	
maior_temp = ((a+b)+abs(a-b))/2;
maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
printf("O maior entre |%d|%d|%d| = %d", a,b,c,maior);
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
		
	case 9:
	ex8();
	break;

	case 10:
	ex8();
	break;
	
	}
	}
