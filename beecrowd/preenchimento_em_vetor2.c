#include <stdio.h>

#define TAM 1000

int main(){
    int t;
    int n[TAM];
    
    scanf("%d", &t);

    for(int i = 0, j = 0; i < TAM; i++){
        n[i] = j;
        printf("N[%d] = %d\n", i, n[i]);
        if(j == t - 1)
            j = 0;
        else
            j++;
    }


    return 0;
}