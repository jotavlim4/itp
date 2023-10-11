
#include <stdio.h>
#include <ctype.h>

#define TAM_MAX 21

int validate_plate(char vet[]){
    for(int i = 0; i < 3; i++){
        if(!isupper(vet[i]))
            return 0;
    }
    
    if(vet[3] != '-')
        return 0;

    for(int i = 4; i < 8; i++){
        if(!isdigit(vet[i]))
            return 0;
    }

    return 1;
}

int main(){
    char plate[TAM_MAX];
    
    scanf("%s", plate);
        
    if(strlen(plate) != 8)
        printf("não\n");
        
    else if(validate_plate(plate))
        printf("sim\n");
        
    else
        printf("não\n");
              
    return 0;
}