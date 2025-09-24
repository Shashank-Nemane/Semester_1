#include<stdio.h>
int main()
{
    float per;
    printf("Enter your battery percentage ");
    scanf("%f",&per);
    if(per<=0)
    {
        printf("Invalid input");
    }
        else if(per>100)
    {
        printf("Invalid input");
    }
    else if(per<=25)
    {
        printf("Power saving mode on");
    }
    else
    {
        printf("Power saving mode off");
    }
    return 0;
}
