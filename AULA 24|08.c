#include <stdio.h>
#include <stdlib.h>

int main(){
/*
int a, b, c;
int resultado;

printf("Insira os valores de A, B, C: ");
scanf("%d %d %d", &a, &b, &c);

if (a > b){
	resultado = a;
}
else{
	resultado = b;
}
if (c > resultado){
	resultado =c;
}
printf("%d eh o maior", resultado);
*/

int num, inverso, quadrado;

printf("Digite um numero:" );
scanf("%d", &num);

inverso = num * -1;
quadrado = num * num;

if(num > 0){
	printf("%d", inverso);
} else{
	printf("%d", quadrado);
}

	return 0;
}
