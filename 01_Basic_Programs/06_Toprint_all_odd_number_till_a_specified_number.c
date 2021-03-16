#include<stdio.h>
void main()
{
    int i;
    printf("Enter a number till which odd numbers should be printed :");
    scanf("%d",&i);
    for(int j=0;j<=i;j++)
    {
        if(j%2==1)
        {
            printf("%d",j);
        }
        else
        {
            continue;
        }
        printf("\n");
    }
}