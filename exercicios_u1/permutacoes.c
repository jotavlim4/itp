#include <stdio.h>

#define TRUE 1
#define FALSE 0


int main(){
    int n;
    scanf("%d", &n);

    int permutacoes[n];
    int vet_n[n];
    int i, j;
    int ocorre;
    int count = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &permutacoes[i]);
        vet_n[i] = i + 1;
    }

    for(i = 0; i < n; i++){
        ocorre = FALSE;
        for(j = 0; j < n; j++){
            if(vet_n[i] == permutacoes[j])
                ocorre = TRUE;
        }

        if(ocorre)
            count++;
    }

    if(count != n)
        printf("não\n");
    else
        printf("sim\n");
    

    return 0;
}