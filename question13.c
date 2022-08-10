#include<stdio.h>
int main()
{
int num;
printf("enter a number: ");
scanf("%d",&num);
printf("number after rotating by one position towards the right is %d",(num%10)*100+(num/10));

    return 0;
}