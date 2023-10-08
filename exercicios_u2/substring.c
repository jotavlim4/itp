#include <stdio.h>
#include <ctype.h>

#define TAM 41

int string_len(char s[]){
    int i = 0;
    while(s[i] != '\n'){
        if(s[i] == '\0')
            break;
        else
            i++;
    }
    return i;
}
//conta ocorrencias
int count_ocurrences(int len_1, int len_2, char s1[len_1], char s2[len_2]){
    int ocurrence = 0;

    for(int i = 0; i <= len_2 - len_1; i++){
        for(int j = i, k = 0; s2[j] == s1[k]; j++, k++){
            if(k == len_1 - 1){
                ocurrence++;
            }
        }
    }

    return ocurrence;
}

//print o indice de cada ocorrencia
void index_ocurrences(int len_1, int len_2, char s1[len_1], char s2[len_2]){
    int index[TAM];
    int count = 0;  

    for(int i = 0; i <= len_2 - len_1; i++){
        for(int j = i, k = 0; s2[j] == s1[k]; j++, k++){
            if(k == len_1 - 1){
            index[count] = i;
            count++;
            }
        }
    }
    printf("Posições: ");
    for(int i = 0; i < count; i++){
        i < count - 1 ? printf("%d ", index[i]): printf("%d\n", index[i]);
    }
}

void toLowercase(int len, char string[len]){
  int i = 0;
  while(string[i] != '\0'){
    string[i] = tolower(string[i]);
    i++;
  }
}

int main(){
    char a[TAM];
    char b[TAM];
    int index[TAM];
    int len_a, len_b;

    fgets(a, TAM, stdin);
    fgets(b, TAM, stdin);

    len_a = string_len(a);
    len_b = string_len(b);

    toLowercase(len_a, a);
    toLowercase(len_b, b);

    printf("Repetições: %d\n", count_ocurrences(len_a, len_b, a, b));
    if(count_ocurrences(len_a, len_b, a, b) != 0)
        index_ocurrences(len_a, len_b, a, b);
    
    return 0;
}