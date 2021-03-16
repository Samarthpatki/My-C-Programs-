#include<stdio.h>
void main()
{
 int a,b,c;
 printf("\nEnter first number  :");
 scanf("%d",&a);
 printf("\nEnter second number  :");
 scanf("%d",&b);
 printf("\nEnter third number  :");
 scanf("%d",&c);
printf("\nThe Entered Numbers are %d %d %d",a,b,c);
if(a>b && a>c)
{
    printf("\nThe First number %d is the greatest of the three numbers ",a);
}
else if(b>a && b>c)
    {
        printf("\nThe Second number %d is the greatest of the three numbers ",b);
    }
else
{
    printf("\nThe Third number %d is the greatest of the three numbers ",c);
}
}