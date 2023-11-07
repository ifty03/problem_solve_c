#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (n != m)
        {
            flag = 1;
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if ((i == j) || (i + j == n - 1))
            {
                // printf("%d ", ar[i][j]);
                if (ar[i][j] != 1)
                {
                    flag = 1;
                }
                continue;
            }
            if (ar[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}