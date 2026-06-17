#include <stdio.h>
void disp_2digit_ones5(int);
int main()
{
    int x;
    x=99;
    disp_2digit_ones5(x);
}
void disp_2digit_ones5(int x)
{
    int i,ones,sum;
    sum=0;
    for(i=10;i<=x;i++)
    {
        ones=i%10;
        if(ones==5)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
