#include<stdio.h>
int main()
{
    int arr[100][100];
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i + j == n - 1)
                printf("%d ", arr[i][j]);
        }
    }
    return 0;
}