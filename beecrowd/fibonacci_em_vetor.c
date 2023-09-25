#include <stdio.h>


double fibonacci_n(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    
    double a = 0;
    double b = 1;
    double result;
    
    for(int i = 2; i <= n; i++){
        result = a + b;
        a = b;
        b = result;
    }  
    return result;
}

void imprime(int n){
    double enesimo;
    
    enesimo = fibonacci_n(n);
    //%lu para double
    printf("Fib(%d) = %.0lf\n", n, enesimo);
}

int main(){
    int t;
    int testes;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &testes);
        imprime(testes);
    }

    return 0;
}