#include <stdio.h>
void disp_sum(int);
int main()
{
    int x;
    x=5;
    disp_sum(x);
}
void disp_sum(int x)
{
    int i,sum;
    sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }
     printf("%d",sum);
}
