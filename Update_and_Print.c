#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int x;
    int y;
    scanf("%d%d", &x, &y);
    ar[x] = y;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ar[n - i]);
    }

    return 0;
}