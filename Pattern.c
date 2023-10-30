#include <stdio.h>
int main()
{
    int n, h, s, d;
    scanf("%d", &n);
    s = n - 1;
    h = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= h; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {

                printf("#");
            }
        }

        printf("\n");
        if (i < n)
        {
            s--;
            h = h + 2;
        }
        else
        {
            s++;
            h = h - 2;
        }
    }

    return 0;
}