#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first number is %d",a);
    
    printf("\nsecond number is %d",b);
  
    return 0;
}