#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 61

int string_lenght(char string[])
{
  int count = 0;

  while (string[count] != '\n')
  {
    if (string[count] != '\0')
      count++;
  }
  return count;
}

void toLowercase(char string[])
{
  int i = 0;
  while (string[i] != '\0')
  {
    string[i] = tolower(string[i]);
    i++;
  }
}

void first_upper( char string[])
{
  for (int i = 0; i < string_lenght(string); i++)
  {
    if (string[i - 1] == ' ' && i > 0)
    {
      string[i] = toupper(string[i]);
    }
    else if (i == 0)
    {
      string[i] = toupper(string[i]);
    }
    else
      continue;
  }
}

int main()
{
  char text[TAM];
  int lenght;

  fgets(text, TAM, stdin); // inclui o \n na string

  // calcula tamanho da string
  lenght = string_lenght(text);
  // faz toda a string ser minuscula
  toLowercase(text);
  // apenas primeira letra maisucla
  first_upper(text);

  printf("%s", text);

  return 0;
}
