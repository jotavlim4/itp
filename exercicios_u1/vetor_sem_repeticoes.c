
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main(){
    int tam;
    scanf("%d", &tam);
    
    int vec[tam];
    int repetido;

    for(int i = 0; i < tam; i++)
        scanf("%d", &vec[i]);

    for(int i = 0; i < tam; i++){
        repetido = FALSE;
        for(int j = 0; j < i; j++){
            if(vec[j] == vec[i]){
                repetido = TRUE;
                break;
            }
        }
        if(!repetido){
            printf("%d ", vec[i]);
        }
    }

    return 0;
}