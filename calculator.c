/*print the given series of arithematic operations*/
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
void main()
{
    int a,b,c,d,e;
    char operator;
    float division;
    printf("user enter the choice value");
    scanf("%c",&operator);
    switch(operator)
    {
        case '+':printf("user enter the a,b values"); 
               scanf("%d%d",&a,&b);
               printf("a=%d\nb=%d\n",a,b);
               c=add(a,b);
               printf("the addition of two numbers=%d",c);
               break;
        case '-':printf("user enter the a,b values");
               scanf("%d%d",&a,&b);
               printf("a=%d\nb=%d\n",a,b);
               d=sub(a,b);
               printf("the subtraction of two nmumbers=%d",d);
               break;       
        case '*':printf("user enter the a,b values");
               scanf("%d%d",&a,&b);
               printf("a=%d\nb=%d\n",a,b);
               e=mul(a,b);
               printf("the multiplication of two nmumbers=%d",e);
               break;               
        case '/':printf("user enter the a,b values");
               scanf("%d%d",&a,&b);
               printf("a=%d\nb=%d\n",a,b);
               division=div(a,b);
               printf("the division of two nmumbers=%f",division);
               break;
        default :printf("invalid choice value");
    }  
    int add(int a,int b)
    {
        int c;
        c=a+b; 
        return(c);
    }
    int sub(int a,int b)
    {
        int d;
        d=a-b;
        return(d);
    }
    int mul(int a,int b)
    {
        int e;
        e=a*b;
        return(e);
    }
    float div(int a,int b)
    {
        float division;
        division=(float)(a/b);
        return(division);
    }
}