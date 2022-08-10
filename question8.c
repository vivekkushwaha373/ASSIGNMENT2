#include<stdio.h>
int main()
{
    int a,c;
    printf("enter a number: ");
    scanf("%d",&a);
    c=a&1;
    if(a&1==0)
    printf("number is even");
    else
    printf("number is odd");

    return 0;
}