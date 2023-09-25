#include <stdio.h>

#define TAM 10

void imprime(int tam, int vetor[tam]){
    for(int i = 0; i < tam; i++)
        printf("N[%d] = %d\n", i, vetor[i]);
    
}

void preenche(int valor_inicial, int tam, int vetor[tam]){
    int valor;  
    
    vetor[0] = valor_inicial;

    for(int i = 1; i < tam; i++)
        vetor[i] = 2 * vetor[i - 1]; 
}

int main(){
    int n[TAM];
    int x;
    
    scanf("%d", &x);

    preenche(x, TAM, n);
    imprime(TAM, n);

    return 0;
}