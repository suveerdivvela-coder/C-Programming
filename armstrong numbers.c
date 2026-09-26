/*print the armstrong numbers by using the given data*/
#include <stdio.h>
void main()
{
    int sum=0,num,a,r;
    printf("user enter the n as an input");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
    }
    if(a==sum)
        printf("the given number is armstrong number=%d",sum);
    else
        printf("the given number is not an armstrong number=%d",sum);    
}