#include <stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    int x;
    x=99;
    disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
    int i,ones,tens,sum;
    for(i=10;i<=x;i=i+2)
    {
        ones=i%10;
        tens=i/10;
        sum=ones+tens;
        if(sum==6)
        {
            printf("%d\n",i);
        }
    }
}
