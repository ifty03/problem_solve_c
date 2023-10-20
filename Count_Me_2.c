#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[100001];
    gets(S);
    int c = 0;
    int len = strlen(S);
    for (int i = 0;i<len; i++)
    {
        if ((S[i] != 'a') && (S[i] !=  'e') && (S[i] !=  'i') && (S[i] !=  'o') && (S[i] != 'u'))
        {   
            c++;
        }
        
    }
    printf("%d",c);
    return 0;
}
