#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 5;
    
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            flag++;
        }
    }
    int s = flag;

    for (int i = 1; i <= flag + 5; i++)
    {
        if (i <= flag)
        {
            for (int j = 1; j <= s-1; j++)
            {
                printf(" ");
            }

            for (int l = 1; l <= k; l++)
            {
                printf("*");
            }
            k = k + 2;
            s--;
        }
        else
        {
            for (int i = 1; i <= 5; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= n; i++)
            {
                printf("*");
            }
        }
        printf("\n");
    }


    return 0;
}