#include<stdio.h>
int main()
{ int n,count=0;
 printf("Enter an integer : ");
 scanf("%d",&n);
 
 while(n!=0)
 { count++;
  n=n/10;
 }
 
 printf("The number have %d digits",count);
 return 0;
}