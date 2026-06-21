#include <stdio.h>
void disp_LCM2(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    disp_LCM2(x,y);
}
void disp_LCM2(int x,int y)
{
    int lcm;
    lcm=x;
    while(1)
    {
        if(lcm%x==0 && lcm%y==0)
        {
            printf("%d",lcm);
            break;
        }
    lcm++;
    }
}
