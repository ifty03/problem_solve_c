#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[10001];
    gets(s);
    int ch[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        ch[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(ch[i]>0){
            printf("%c - %d \n", i + 'a', ch[i]);
        }
    }
    return 0;
}
