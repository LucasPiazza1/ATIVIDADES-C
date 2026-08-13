#include<stdio.h>
///////// ex 1
int main(){
	int primeiro, segundo, auxiliar;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor: \n");
	scanf("%d", &segundo);
	
	auxiliar = primeiro;
	primeiro = segundo;
	segundo = auxiliar;
	
	printf("%d \n %d", primeiro, segundo);
	
	return 0;
}
//////// ex 2

int main(){
  
	int valor;
  
	printf("Me de um valor: \n")
	scanf("%d", valor);

}
