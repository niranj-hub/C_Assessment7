#include <stdio.h>
void disp_total_odd_digits(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    disp_total_odd_digits(x);
}
void disp_total_odd_digits(int x)
{
    int rem,count;
    count=0;
    while(x!=0)
    {
        rem=x%10;
        if(rem%2!=0)
        {
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}
