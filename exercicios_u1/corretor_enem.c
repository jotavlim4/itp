
#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    int gabarito[n];
    int respostas[n];
    int count = 0;
    int i, j;

    for(i = 0; i < n; i++)
        scanf("%d", &gabarito[i]);
    
    for(i = 0; i < n; i++)   
        scanf("%d", &respostas[i]);

    for(i = 0, j = 0; i < n; i++, j++){
        if(gabarito[i] == respostas[j])
            count++;
    }

    count > 1 ? printf("%d acertos\n", count) : printf("%d acerto\n", count);  

    return 0;
}