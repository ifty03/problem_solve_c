#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s;
    scanf("%d", &s);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            int a = ar[i] + ar[i + j+1];
            if (a == s)
            {
                printf("%d",a);
                break;
            }
        }
    }
    return 0;
}