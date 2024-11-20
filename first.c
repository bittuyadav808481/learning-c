#include <stdio.h>

int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    if (number%97 == 0)
    {
        printf("number is divisible by 97\n");
    }
    else
    {
        printf("number is not divisible by 97\n");
    }


    return 0;
}