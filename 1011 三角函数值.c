#include<stdio.h> 
#include<math.h>
int main() {
    const double PI = acos(-1.0);
    float n;
    scanf("%f", &n);
    printf("%.2f\n", sin(n / 180.0 * PI));
    printf("%.2f\n", cos(n / 180.0 * PI));
    return 0;
}