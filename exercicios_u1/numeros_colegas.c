#include <stdio.h>

int soma_divisores(int a){
    int i;
    int soma = 0;

    for(i = 1; i < a; i++){
        if(a % i == 0)
            soma += i;
    }

    return soma;
}

int modulo(int x){
    if(x < 0)
        return -1*x;
    else if (x == 0)
        return 0;
    else
        return x;
}

int colegas(int a, int b){
    if(modulo(soma_divisores(a) - b) <= 2 & modulo(soma_divisores(b) - a) <= 2)
        return 1;
    else    
        return 0;
}



int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(colegas(a, b) == 1)
        printf("S\n");
    else    
        printf("N\n");

    return 0;
}