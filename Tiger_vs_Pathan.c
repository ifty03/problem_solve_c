#include <stdio.h>
#include <string.h>
int main()
{
    int t,n;
    scanf("%d %d",&t,&n);
    char s[n];
    fgets(s,n,stdin);
    printf("%s",s);
    return 0;
}