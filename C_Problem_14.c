#include <stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
}
void disp_interchange_first_last_digit(int x)
{
    int first,middle,last,temp,power,result;
    temp=x;
    power=1;
    last=x%10;
    while(temp>9)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    middle=x%power;
    middle=middle/10;
    result=(last*power)+(middle*10)+first;
    
     printf("%d",result);
}
