#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int b[n];

        for (int i = 0; i < n; i++)
        {
            b[i] = ar[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(ar[i] - b[i]));
        }
        printf("\n");
    }

    return 0;
}