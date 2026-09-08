#include <iostream>

void exerc2(){
	// Faça um programa que leia um valor em reais e a cotaçao do dolar. Em seguida, imprima o valor correspondente em dolares.
	float dola, real, cota;
	printf("Me de um numero em real: \n");
	scanf("%f", &real);
	printf("Me de o valor do dolar(cota):\n ");
	scanf("%f", &cota);
	printf("%f reais sao %f dolinhos \n", real, (real/cota));
	
}
void exerc3(){
	//Leia um valor que represente uma temperatura em graus celcius e apresente-a a convertida em graus Fahrenheit.
	float tempC, tempF;
	printf("Me de a temperatura em graus celcius: \n");
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura maxima de hoje na tela da globo %f \n", tempF);
	
	
}
void exerc8(){
	//(URI 1019) Leia um valor inteiro, que é o tempo de duraçao em segundos de um determinado evento de uma fabrica, e informe-o
	int segundos, horas, minutos;
	printf("Digite os segundos: \n");
	scanf("%d", &segundos);
	horas = segundos/3600;
	minutos = (segundos-(horas*3600))/60;
	segundos = segundos-((horas*3600)+(minutos*60));
	printf("tempo %d:%d:%d", horas, minutos, segundos);

}

int main(int argc, char** argv) {
	int resposta;
	printf("Usuario, qual exercicio quer resolver? |2|3|8| \n");
	scanf("%d", &resposta);
	
	switch(resposta){
	
	case 2:
	exerc2();
	break;
	;
	case 3:
		exerc3();
	break;
	;
	case 8:
	exerc8();
	break; 
	;
	return 0;
}
}
