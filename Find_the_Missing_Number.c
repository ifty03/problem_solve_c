#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int m;
        scanf("%lld", &m);
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (m == 0)
        {
            printf("0");
            continue;
        }
        long long int k = a * b * c; 
        if(m<k){
           printf("-1\n"); 
        }else{
            if ((m / k * k) == m)
        {
            printf("%lld\n", m / k);
            
        }
        else
        {
            printf("-1\n");
        }
        }
    }
    return 0;
}