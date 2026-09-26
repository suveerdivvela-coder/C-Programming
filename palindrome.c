/*print the palindrome numbers upto the given number*/
#include <stdio.h>
void main()
{
    int sum,n,n1=1,a,r;
    printf("user enter the n value as the input");
    scanf("%d",&n);
    printf("the n value=%d\n",n);
    while(n1<=n)
    {
        sum=0;
        a=n1;
    while(a>0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10; 
    }      
    if(n1==sum)
      printf("the palindrome numbers are=%d\n",sum);
    n1=n1+1;  
   } 
}