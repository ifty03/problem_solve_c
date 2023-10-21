#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int c;
    scanf("%d %d", &n, &c);

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < c; i++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }
    return 0;
}
