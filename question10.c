#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
   
    a=a/10;
    printf("the number is %d",a*10);

    return 0;
}