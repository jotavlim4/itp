#include <stdio.h>

int main(){
    int n;
    int menor, posicao;
    scanf("%d", &n);

    int vetor[n];


     
    for(int i = 0; i < n; i++){
        if(i == 0){
            scanf("%d", &vetor[i]);
            menor = vetor[i];
            posicao = i;
        }
        else
            scanf("%d", &vetor[i]);
        
        if(menor > vetor[i]){
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}