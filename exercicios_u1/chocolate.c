#include <stdio.h>


int main()
{
    int l, h;
    int new_size;
    int count;

    scanf("%d %d", &l, &h);

    count = 0;
    if (l > h)
    {
        while (l != h)
        {
            new_size = l / 2;
            count++;
            l = new_size;
        }
        
    }
    else
    {
        while (l != h)
        {
            new_size = h / 2;
            count++;
            h = new_size;
        }   
    }
    
    printf("%d\n", count);
    

    return 0;
}