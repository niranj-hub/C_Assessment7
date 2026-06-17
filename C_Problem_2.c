#include <stdio.h>
void disp_descend(int);
int main()
{
    int x;
    x=0;
    disp_descend(x);
}
void disp_descend(int x)
{
    int i;
    for(i=5;i>x;i--)
    {
        printf("%d\n",i);
    }
}
