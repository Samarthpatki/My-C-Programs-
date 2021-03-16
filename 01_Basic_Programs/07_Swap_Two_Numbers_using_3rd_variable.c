#include<stdio.h>
void main()
{
  int a,b,temp;
  printf("\nEnter First number A=");
  scanf("%d",&a);
   printf("\nEnter Second number B=");
  scanf("%d",&b);
  printf("\nThe numbers you Entered before swaping are A=%d and B=%d ",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\nAfter Swaping the numbers are A=%d and B=%d",a,b);
  

}