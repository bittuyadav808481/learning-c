#include <stdio.h>

int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
    printf("year is leap year \n");

}
else
{
    printf("year is not leap year \n");
}
    return 0;
}