#include <stdio.h>
 
#define TAM 5
#define VALORES 15

void imprime_par(int tam, int v[tam]){
    for(int i = 0; i < tam; i++){
        printf("par[%d] = %d\n", i, v[i]);
    }
}

void imprime_impar(int tam, int v[tam]){
    for(int i = 0; i < tam; i++){
        printf("impar[%d] = %d\n", i, v[i]);
    }
}

int main(){
    int inteiro;
    int impares[TAM];
    int pares[TAM];
    int conta_par;
    int conta_impar;
    int restantes;


    conta_par = conta_impar = 0;
    restantes = VALORES;
    while(restantes != 0){
        scanf("%d", &inteiro);
        if(inteiro % 2 == 0){
            pares[conta_par] = inteiro;
            conta_par++;
            restantes--;
            if(conta_par == TAM){
                imprime_par(TAM, pares);
                conta_par = 0;

            }
        }
        else{
            impares[conta_impar] = inteiro;
            conta_impar++;
            restantes--;
            if(conta_impar == TAM){
                imprime_impar(TAM, impares);
                conta_impar = 0;
            }
        }
    }
    
    imprime_impar(conta_impar, impares);
    imprime_par(conta_par, pares);

    


    return 0;
}