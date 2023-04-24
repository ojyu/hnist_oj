#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n < 200)
        printf("%.2f", n);
    else if (n >= 200 && n < 500)
        printf("%.2f", n * 0.9);
    else if (n >= 500 && n < 1000)
        printf("%.2f", n * 0.8);
    else
        printf("%.2f", n * 0.5);
    return 0;
}