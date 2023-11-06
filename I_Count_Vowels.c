#include <stdio.h>
#include <string.h>
int check(char *s, int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int ans = check(s, i + 1);
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    // printf('%s',s);
    int t = check(s, 0);
    printf("%d", t);
    return 0;
}