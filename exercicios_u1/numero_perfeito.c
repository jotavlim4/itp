#include <stdio.h>

int main(){
    int num, sum = 0;
    int i;

    scanf("%d", &num);

    for(i = 1; i < num; i++){
        if(num % i == 0)
            sum += i;
    }

    if(num == sum)
        printf("Perfeito\n");
    else    
        printf("Não perfeito\n");

    return 0;
}