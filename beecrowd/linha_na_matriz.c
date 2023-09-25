#include <stdio.h>

#define TAM 12

int main(){
    int l;
    char t;
    double m[TAM][TAM];

    scanf("%d %c", &l, &t);

    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            scanf("%lf", &m[i][j]);
            if(i == l){
                soma += m[i][j]; 
            }
        }
    }

    if(t == 'M')
        printf("%.1lf\n", soma / 12.0);

    else
        printf("%.1lf\n", (double)soma);

    return 0;
}