#include <stdio.h>

#define TAM 2

int main(){
    int n; 
    scanf("%d", &n);

    int vet[n];
    int pontos[n];
    int maior;

    for(int i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    maior = vet[0];

    for(int i = 0; i < n; i++){
        if(maior <= vet[i])
            maior = vet[i];
    }

    int k = 0;
    for(int i = 0; i < n; i++){
        if(maior == vet[i]){
            pontos[k] = i;
            k++;
        }
    }

    printf("%d\n", pontos[1] - pontos[0] - 1);
    

    return 0;
}