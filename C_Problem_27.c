#include <stdio.h>
void disp_count_sum14(int);
int main()
{
    int x;
    x=99999;
    disp_count_sum14(x);
}
void disp_count_sum14(int x)
{
    int temp,sum,count;
    count=0;
    while(x>0)
    {
        temp=x;
        sum=0;
        while(temp!=0)
        {
            sum=sum+(temp%10);
            temp=temp/10;
        }
        if(sum==14)
        {
            count++;
        }
        x--;
    }
    printf("%d",count);
}
