#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m1;
    int m2;
    int D;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &D);
        int total = (m1*D)/(m1+m2);
        int save = D - total;
        printf("%d\n", save);
    }
    return 0;
}