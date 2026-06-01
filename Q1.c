#include <stdio.h>
 void main() {
   int i,n,sum=0;
   printf("input value of terms:");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
      sum=sum+i;
   }
   printf("\n The sum of natural numbers upto %d terms : %d \n", n , sum );
   return 0;
 }