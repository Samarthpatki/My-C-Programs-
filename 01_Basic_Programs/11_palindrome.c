#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number to check whether it is Palindrome or not :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (sum==temp)
    {
        printf("Entered number is a Palindrome number");
    }
    else
    {
        printf("Entered number is not a Panlindrome number");
    }
}