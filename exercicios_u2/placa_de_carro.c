#include <stdio.h>
#include <ctype.h>

#define TAM_MAX 21

int str_len(char vet[]){
    int i;
    int count;
    
    i = 0;
    count = 0;
    while(vet[i] != '\n'){
        if(vet[i] == '\n')
            vet[i] = '\0';
        else
            count++;
        i++;
    }
    return count;
}

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
    
    fgets(plate, TAM_MAX, stdin); //fgets lê a string até encontrar o '\n'
    str_len(plate);

    //printf("%d\n", str_len(plate));
    if(str_len(plate) != 8)
        printf("não\n")
    
    if(validate_plate(plate))
        printf("sim\n");
    else
        printf("não\n");
              
    return 0;
}