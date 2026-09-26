/*print the givrn number is a perfect number or not*/
#include <stdio.h>
void main()
{
 int sum=0,num,num1=1,r;
 printf("user enter the number n as an input");   
 scanf("%d",&num);
 printf("the given number=%d\n",num);
 while(num1<num)
 {
    if(num%num1==0)
    sum=sum+num1;
    num1=num1+1;
 }
 if(sum==num)
   printf("the given number is a perfect number=%d",sum);
 else
   printf("the given number is not a perfect number=%d",sum);  
}