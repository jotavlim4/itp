#include <stdio.h>


int main(){
    int a, b;
    int divi;
    
    scanf("%d %d", &a,&b);
    
    if(a % b == 0){
        divi = a / b;
        printf("Resultado: %d\n", divi);
    }
    
    
    
    return 0;
}