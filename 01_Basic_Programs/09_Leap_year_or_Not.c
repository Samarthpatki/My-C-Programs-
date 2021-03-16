#include<stdio.h>
void main()
{
 int year;
 printf("Enter the year to check whether it is leap year or not :");
 scanf("%d",&year);
 if(year%400==0)
 {
    printf("\n%d year is a leap year",year);
 }
 else if(year%100==0)
 {
    printf("\n %d year is not a leap year ",year);
 }
 else if(year%4==0)
 {
    printf("\n %d year is  a leap year ",year);
 }
 else
 {
  printf("\n %d year is not a leap year ",year);   
 }
}