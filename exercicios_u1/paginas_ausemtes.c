#include <stdio.h>

#define TRUE 1
#define FALSE 0


int main(){
    int m,n;
    scanf("%d %d", &m, &n);

    int pag_dig[n];
    int pag_res[m-n];
    int flag;

    for(int i = 0; i < n; i++)
        scanf("%d", &pag_dig[i]);


    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(pag_dig[j] > pag_dig[j + 1]){
                int aux = pag_dig[j];
                pag_dig[j] = pag_dig[j + 1];
                pag_dig[j + 1] = aux;
            }
        }
    }

    for(int i = 1; i <= m; i++){
        flag = FALSE;
        for(int j = 0; j < n; j++){
            if(i == pag_dig[j]){
                flag = TRUE;
                break;
            }
        }
        if(!flag)
            printf("%d ", i);
    }
    putchar('\n');

    return 0;
}