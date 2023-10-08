#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define TAM 61

int string_lenght(int len, char string[len]){
  int count = 0;
  
  while(string[count] != '\n'){
    if(string[count] != '\0')
      count++;
  }
  return count;
}

void toLowercase(int len, char string[len]){
  int i = 0;
  while(string[i] != '\0'){
    string[i] = tolower(string[i]);
    i++;
  }
}

void first_upper(int len, char string[len]){
  for(int i = 0; i < len; i++){
    if(string[i - 1] == ' ' && i > 0){
      string[i] = toupper(string[i]);
    }
    else if(i == 0){
      string[i] = toupper(string[i]);
    }
    else
      continue;
  }
}

int main(){
  char text[TAM];
  int lenght;

  fgets(text, TAM, stdin); //inclui o \n na string

  lenght = string_lenght(TAM, text);

  toLowercase(lenght, text);
  first_upper(lenght, text);

  printf("%s", text);


  return 0;
}
