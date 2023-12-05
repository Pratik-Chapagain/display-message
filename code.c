#include<stdio.h>
#include<conio.h>
int main()
{
    int n ;
    printf("enter n:");
    scanf("%d",&n);
    if(n%3==0)
    {
        if(n%7==0)
        printf("it is divisible by both");
        else
        printf("it is the required number");
    }
    else
    printf("it is not required number");
    return 0;
}