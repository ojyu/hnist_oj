#include <stdio.h>
int main() {
    float a, b, c;
    float d;
    scanf("%f%f%f", &a, &b, &c);
    d = (a + b + c) * 1 / 3;
    printf("%.1f", d);
    return 0;
}