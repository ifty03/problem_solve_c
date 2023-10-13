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
    int negative= -0;
    int positive=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            positive = positive + ar[i];
        }
        else
        {
            negative = negative + ar[i];
        }
    }

    printf("%d %d", positive, negative);
    return 0;
}