#include<stdio.h>
int main() {
    int t = 0;
    scanf("%d", &t);
    if (t >= 90 && t <= 100)
        printf("A");
    else if (t >= 80 && t <= 89)
        printf("B");
    else if (t >= 70 && t <= 79)
        printf("C");
    else if (t >= 60 && t <= 69)
        printf("D");
    else
        printf("E");
    return 0;
}