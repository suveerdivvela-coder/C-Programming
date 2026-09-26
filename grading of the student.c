/*print the grades according to the given average value*/
#include <stdio.h>
void main()
{
    int m,p,c;
    float avg;
    printf("user enter the m,p,c marks");
    scanf("%d%d%d",&m,&p,&c);
    printf("the marks in subject m=%d\n",m);
    printf("the marks in subject p=%d\n",p);
    printf("the marks in subject c=%d\n",c);
    avg=(float)(m+p+c)/3;
    printf("the average of three subjects=%f\n",avg);
    if((m<=39)||(p<=39)||(c<=39))
        printf("the student got fail grade");
    else    
    if(avg<=49)
        printf("the student got D grade");
    else
    if(avg<=59)
       printf("the student got c grade");
    else     
    if(avg<=69)
       printf("the student got B grade");     
    else
    if(avg<=79)
        printf("the student got A grade");
    else
    if(avg<=89)
       printf("the student got A+ grade");       
    else
    if(avg<=100)
       printf("the student got excellent grade");     
}