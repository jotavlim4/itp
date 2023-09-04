#include <stdio.h>


int main(){
    int num, qtd_virg;

    scanf("%d %d", &num, &qtd_virg);

    for(int i = 0; i < qtd_virg; i++){
        i < qtd_virg - 1 ? printf("%d, ", num) : printf("%d\n", num);
    }
    
    return 0;
}