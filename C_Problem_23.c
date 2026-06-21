#include <stdio.h>
void disp_single_digit_square(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    disp_single_digit_square(x);
}
void disp_single_digit_square(int x)
{
    int rem,count;
    count=0;
    while(x!=0)
    {
        rem=x%10;
        if(rem==1||rem==4||rem==9)
        {
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}
