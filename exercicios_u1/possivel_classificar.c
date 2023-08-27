#include <stdio.h>

int main(){
    int P, R, M;

    scanf("%d %d %d", &P, &R, &M);

    if(P >= M)
        printf("O time já está classificado\n");
    else{
        if(P + (3 * R) >= M)
            printf("É possível se classificar\n");
        else    
            printf("Não é possível se classificar\n");
    }


    return 0;
}