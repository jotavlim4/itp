#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n + i; j++)
        {
            printf("%d ", j);           
        }
        putchar('\n');
        
    }
    return 0;
}