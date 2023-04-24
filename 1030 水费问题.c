#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 10)
        printf("%d", 6 * n);
    else if (n > 10 && n <= 20)
        printf("%d", 60 + (n - 10) * 7);
    else
        printf("%d", 130 + (n - 20) * 10);
    return 0;
}