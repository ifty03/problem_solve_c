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

    int low = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            low = ar[i];
        }
        if (low > ar[i])
        {
            low = ar[i];
        }
        if (i == n - 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (low == ar[i])
                {
                    index = i+1;
                    break;
                }
            }
        }
    }

    printf("%d %d", low, index);
    return 0;
}