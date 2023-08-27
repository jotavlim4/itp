#include <stdio.h>

int main(){
    int num_trilhas, aval_saude;

    scanf("%d", &num_trilhas);

    if(num_trilhas < 5)
        printf("Iniciante\n");
    else if (num_trilhas >= 5 && num_trilhas < 20){
        scanf("%d", &aval_saude);
        if(aval_saude == 0)
            printf("Iniciante\n");
        else
            printf("Intermediário\n");
    }
    else{
        scanf("%d", &aval_saude);
        if(aval_saude == 0)
            printf("Intermediário\n");
        else
            printf("Avançado\n");
    }

    return 0;
}