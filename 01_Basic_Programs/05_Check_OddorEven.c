#include<stdio.h>
void main()
{
    int i; 
    printf("Enter a number to check whether it is Even or Odd :");
    scanf("%d",&i);
    
    if (i%2==0)
    {
        printf("Entered number %d is an Even  number",i);
    }
    else
    {
          printf("Entered number %d is an Odd  number",i);
    }
}
