#include <stdio.h>
void disp_rsum(int);
int main()
{
    int x;
    x=1;
    disp_rsum(x);
}
void disp_rsum(int x)
{
    int i,sum;
    sum=0;
    for(i=6;i>=x;i--)
    {
        sum=sum+i;
    }
     printf("%d",sum);
}
