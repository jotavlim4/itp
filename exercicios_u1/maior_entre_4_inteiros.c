#include <stdio.h>


int main(){
    int vec[4];
    int i, j;
    int maior;
    
    for(i = 0; i < 4; i++) scanf("%d", &vec[i]);
    
    maior = vec[0];
    
    for(i = 0; i < 4; i++){
        if(maior < vec[i]){
            maior = vec[i];
        }
    }
    
    printf("Maior: %d\n", maior);
    
    
    return 0;
}