#include <stdio.h>


int main(){
    int a, b;
    int i;

    scanf("%d %d", &a, &b);

    for(i = 1; i <= 1000; i++){
        if(i % a == 0 && i % b == 0)
            printf("%d ", i);
    }
    putchar('\n');
    return 0;
}