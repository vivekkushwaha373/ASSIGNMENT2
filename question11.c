#include<stdio.h>
int main()
{
    int number;
    int digit;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("enter a digit: ");
    scanf("%d",&digit);
    number=number/10;
    number=number*10+digit;
    printf("the required number is %d",number);

    return 0;
}