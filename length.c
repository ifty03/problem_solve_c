#include <stdio.h>
#include <string.h>
int main()
{
    char ar[20];
    fgets(ar, 20, stdin);
    int l = 0;
    for (int i = 0; i < sizeof(ar)/sizeof(char); i++)
    {
        if (ar[i] == '\0')
        {
            break;
        }
        else
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}