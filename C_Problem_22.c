#include <stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    disp_total_2digit_odd(x);
}
void disp_total_2digit_odd(int x)
{
    int rem,count;
    count=0;
    while(x>9)
    {
        rem=x%100;
        if(rem%2!=0)
        {
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}
