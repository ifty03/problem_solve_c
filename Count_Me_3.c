#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    char S[10001];
    int cap = 0;
    int sma = 0;
    int deg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",S);
       
        for (int i = 0; i < strlen(S); i++)
        {
  
            if (S[i] <= 'Z' && S[i] >= 'A')
            {
                cap++;
            }
            else if (S[i] <= 'z' && S[i] >= 'a')
            {
                sma++;
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {
                deg++;
            }
        }
   
        printf("%d %d %d\n", cap, sma, deg);
        sma=0;
        cap=0;
        deg=0;
    }

    return 0;
}
