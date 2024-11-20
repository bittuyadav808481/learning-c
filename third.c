#include <stdio.h>

int main()
{
char charecter;
printf("enter the charecter");
scanf("%c",&charecter);
if(97<=charecter|| charecter>=126)
{
    printf("it is lowercase \n");

}
else
{
    printf("it is uppercase \n");
}
    return 0;
}
