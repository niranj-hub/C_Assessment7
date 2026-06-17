#include <stdio.h>
void disp_descend(int);
int main()
{
    int x;
    x=5;
    disp_descend(x);
}
void disp_descend(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i);
    }
}
