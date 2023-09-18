#include <stdio.h>

int main(){
    int n; //quantidade de meses
    scanf("%d", &n);

    int qtd_chuvas[n]; //vetor que armazena a quantidade de chuva em cada mes
    int maior;
    int mes;
    int count = 0;

    for(int i = 0; i < n; i++)
        scanf("%d", &qtd_chuvas[i]);


    for(int i = 0; i < n; i++){
        if(i == 0)
            maior = qtd_chuvas[i];
        else{
            if(maior < qtd_chuvas[i])
                maior = qtd_chuvas[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(maior == qtd_chuvas[i])
            printf("%d ", i + 1);
    }
    printf("%d\n", maior);

    return 0;

}