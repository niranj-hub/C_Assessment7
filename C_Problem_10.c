#include <stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
    int x;
    x=99;
    disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7(int x)
{
    int i,tens,sum;
    sum=0;
    for(i=11;i<=x;i=i+2)
    {
        tens=i/10;
        if(tens==7)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
