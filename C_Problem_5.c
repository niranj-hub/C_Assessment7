#include <stdio.h>
void disp_odd(int);
int main()
{
    int x;
    x=9;
    disp_odd(x);
}
void disp_odd(int x)
{
    int i;
    for(i=1;i<=x;i=i+2)
    {
        printf("%d\n",i);
    }
}
