#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        int x;
        scanf("%d", &x);
        int ar[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &ar[i]);
        }

        int v;
        scanf("%d", &v);

        for (int i = 0; i < x; i++)
        {
            if(ar[i]==v){
                printf("YES\n");
                break;
            }else{
                if(i==x-1){
                    printf("NO\n");
                    break;
                }
            }
        }
        
        
    }
    return 0;
}
