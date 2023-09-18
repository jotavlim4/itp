#include <stdio.h>

#define MAX_TAM 15


int main(){
    int vetA[MAX_TAM], vetB[MAX_TAM], vetC[MAX_TAM], vetD[MAX_TAM];
    int countB, countC, countD;

    countB = countC = countD = 0;

    for(int i = 0; i < MAX_TAM; i++){
        scanf("%d", &vetA[i]);

        if(vetA[i] % 2 == 0){
            vetB[countB] = vetA[i];
            countB++;
        }
        if(vetA[i] % 3 == 0){
            vetC[countC] = vetA[i];
            countC++;
        }
        if((!(vetA[i] % 3 == 0 || vetA[i] % 2 == 0))){
            vetD[countD] = vetA[i];
            countD++;
        }
    }

    printf("B = [");
    for(int i = 0; i < countB; i++){
        i < countB - 1 ? printf("%d, ", vetB[i]) : printf("%d]\n", vetB[i]);  
    }
    printf("C = [");
    for(int i = 0; i < countC; i++){
        i < countC - 1 ? printf("%d, ", vetC[i]) : printf("%d]\n", vetC[i]);  
    }
     printf("D = [");
    for(int i = 0; i < countD; i++){
        i < countD - 1 ? printf("%d, ", vetD[i]) : printf("%d]\n", vetD[i]);  
    }   

    



    return 0;
}