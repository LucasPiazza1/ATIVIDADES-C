int main(int argc, char *argv[]) {
    float valor[10];
    int i;

    printf("Leia os numeros");
    // PARA ( INICIAL, CONDIÇÃO, INCREMENTO)
    for(i=0; i<10; i++){
        scanf("%f", &valor[i]);
    }

    for(i=9; i>0; i--){
        printf("|%f|", valor[i]);
    }
  return 0;
}
