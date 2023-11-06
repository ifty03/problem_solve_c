#include <stdio.h>
void fn(int n)
{
    if (n == 0)
        return;
    int k = n % 10;
    fn(n / 10);
    printf("%d ", k);
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        fn(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}