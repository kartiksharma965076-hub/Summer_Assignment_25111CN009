#include <stdio.h>
int main(){
    int num , count, fact=1;
    printf("enter a number to find factorial\n");
    scanf("%d",&num);
     for (count=1;count<=num;count++)
     {
        fact=fact*count;
     }
     printf("factorial of %d is %d\n",num,fact);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 6efad65bc8318833346417ec0b14eb9857ccbc7f
