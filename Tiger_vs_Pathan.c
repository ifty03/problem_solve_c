#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);

        int T = 0;
        int P = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                T++;
            }
            else
            {
                P++;
            }
        }

        if (P == T)
        {
            printf("Draw\n");
        }
        else if (P > T)
        {
            printf("Pathaan\n");  
        }
        else
        {
            printf("Tiger\n");
        }
    }
    return 0;
}