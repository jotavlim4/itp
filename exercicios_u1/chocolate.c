#include <stdio.h>


int main()
{
    int l, h;
    int new_size;
    int count;

    scanf("%d %d", &l, &h);

    count = 0;
    //fluxo para o caso do "primeiro lado" ser o maior
    if (l > h)
    {
        //executa até que os lados sejam iguais
        while (l != h)
        {
            //divide o valor do lado maior por 2
            //conta a ocorrencia da divisao
            //atualiza o tamanho do maior lado
            new_size = l / 2;
            count++;
            l = new_size;
        }
        
    }
    //fluxo para o caso do "segundo lado" ser o maior
    else
    {
        //executa até que os lados sejam iguais
        while (l != h)
        {   
            //divide o valor do lado maior por 2
            //conta a ocorrencia da divisao
            //atualiza o tamanho do maior lado
            new_size = h / 2;
            count++;
            h = new_size;
        }   
    }
    
    printf("%d\n", count);
    

    return 0;
}