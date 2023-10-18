#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000001];
    fgets(ar, 1000001, stdin);
    for (int i = 0; ar[i] != '\\'; i++)
    {
        printf("%c", ar[i]);
    }

    return 0;
}