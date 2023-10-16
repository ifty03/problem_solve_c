#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = n; i >= 0; i--)
    {
        ar[i] = ar[i - 1];
        if (i  == 1)
        {
            ar[i] = 200;
            break;
        }
    }

    for (int i = 0; i <= n; i++)
    {
    printf("%d ", ar[i]);
    }
    return 0;
}