#include <stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
    int x;
    x=99;
    disp_2digit_odd_sum7(x);
}
void disp_2digit_odd_sum7(int x)
{
    int i,ones,tens,sum;
    for(i=11;i<=x;i=i+2)
    {
        ones=i%10;
        tens=i/10;
        sum=ones+tens;
        if(sum==7)
        {
            printf("%d\n",i);
        }
    }
}
