#include <stdio.h>
void check_last_digit_odd(int x);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    check_last_digit_odd(x);
    return 0;
}
void check_last_digit_odd(int x)
{
    int first,middle,last,temp,power,result;
    last=x%10;
    if(last%2==0)
    {
        printf("%d",x);
    }
    else
    {
        temp=x;
        power=1;
        while(temp>9)
        {
            temp=temp/10;
            power=power*10;
        }
        first=temp;   
        middle=x%power;   
        first=first-1;
        result=(first*power)+middle;
        printf("%d",result);
    }
}
