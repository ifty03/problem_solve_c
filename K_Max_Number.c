#include <stdio.h>
#include <limits.h>
int max(int *ar, int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int m = max(ar, n, i + 1);
    if (m > ar[i])
    {
        return m;
    }
    else
    {
        return ar[i];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int m = max(ar, n, 0);
    printf("%d\n", m);
    return 0;
}