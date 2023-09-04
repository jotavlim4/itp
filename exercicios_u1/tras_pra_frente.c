#include <stdio.h>

int main(){
    int a, b;
    int i;

    scanf("%d %d", &a, &b);
    
    if(a < b){
        for(i = a; i <= b; i++){
            i < b ? printf("%d ", i) : printf("%d\n", i);
        }
    }
    else{
        for(i = a; i >= b; i--){
            i > b ? printf("%d ", i) : printf("%d\n", i);
        }       
    }
    
    return 0;
}