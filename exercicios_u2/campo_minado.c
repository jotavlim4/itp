#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAM_MAX 20

int main(){
    char campo[TAM_MAX];
    int index;
    int soma=0;

    scanf("%s", campo);
    scanf("%d", &index);

    if(campo[index] == '*'){
        printf("bum!\n");
    }
    else if(campo[index] == '.'){
        if(index > 0 && index < strlen(campo) - 1){
            if(campo[index - 1] == '*')
                soma++;
            if(campo[index + 1] == '*')
                soma++;
            printf("%d\n", soma);
        }
        else if(index == 0){
            if(campo[index + 1] == '*')
                soma++;
            printf("%d\n", soma);
        }
        else if(index == strlen(campo) - 1){
            if(campo[index - 1] == '*')
                soma++;
            printf("%d\n", soma);
        }
    }

    return 0;
}