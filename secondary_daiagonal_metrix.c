#include <stdio.h>
int main()
{
    // 2d array
 int n,m;
 scanf("%d %d",&n,&m);
 int ar[n][m];
 
 for(int i=0; i<n;i++){
   for(int j=0;j<m;j++){
     scanf("%d",&ar[i][j]);
   }
 }
 
 int flag =0;
 
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     if(i+j==n-1){
       continue;
     }
     if(ar[i][j]!=0){
       flag=1;
     }
   }
   
 }
 
 if(flag != 0){
   printf("not diagonal matrix\n");
 }else{
    printf("diagonal matrix\n");
 }
    
    return 0;
}