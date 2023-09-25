#include <stdio.h>

#define TAM 20

void imprime(int tam, int v[tam]){
    for(int i = 0; i < tam; i++){
        printf("N[%d] = %d\n", i, v[i]);
    }
}

void troca(int tam, int v[tam]){
    for(int i = 0, j = tam - 1; i < tam / 2, j >= tam / 2; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main(){
    int N[TAM];

    for(int i = 0; i < TAM; i++)
        scanf("%d", &N[i]);

    troca(TAM, N);
    imprime(TAM, N);
    

    return 0;
}