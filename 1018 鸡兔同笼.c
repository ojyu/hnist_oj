#include<stdio.h>
int main()
{
    int m, n;        
    int x, y;             
    scanf("%d%d", &m, &n);
    for (x = 0; x <= m; x++)
    {
        for (y = 0; y <= m; y++)
        {
            if (x + y == m && 2 * x + 4 * y == n)
                printf("%d %d\n", x, y);
        }
    }
    return 0;
}