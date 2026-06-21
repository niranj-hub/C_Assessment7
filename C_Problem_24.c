#include <stdio.h>
void disp_two_digit_square(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    disp_two_digit_square(x);
}
void disp_two_digit_square(int x)
{
    int rem,count;
    count=0;
    while(x>9)
    {
        rem=x%100;
        if(rem==16||rem==25||rem==36||rem==49||rem==64||rem==81)
        {
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}
