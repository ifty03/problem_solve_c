#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int l = n;
    if (n > 0)
    {

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else 
    {
        for (int i = 0; i >= n; i--)
        {
            printf("%d ", l);
            l++;
        }
    }
    return 0;
}