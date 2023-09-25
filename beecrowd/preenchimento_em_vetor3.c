#include <stdio.h>

#define TAM 100

int main(){
    double x;
    double n[TAM];
    scanf("%lf", &x);

    n[0] = x;
    printf("N[0] = %.4lf\n", n[0]);
    for(int i = 1; i < TAM; i++){
        n[i] = n[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }


    return 0;
}