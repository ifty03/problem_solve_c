#include <stdio.h>
#include <string.h>

int is_palindrome(char *S)
{
    int len = strlen(S);
    char c[1000];
    strcpy(c, S);
    for (int i = 1; i <= len; i++)
    {
        int l = 1;
        int r = len - i;
        if (l == r)
        {
            break;
        }
        else
        {

            char t = c[i - 1];
            c[i - 1] = c[r];
            c[r] = t;
            l++;
            r--;
        }
    }
    int cmp = strcmp(S, c);
    return cmp;
}
int main()
{
    char S[1000];
    fgets(S,1000,stdin);

    int cmp = is_palindrome(S);
    if (cmp == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}