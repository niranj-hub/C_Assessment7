#include <stdio.h>
void disp_LCM3(int,int,int);
int main()
{
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    disp_LCM3(x,y,z);
}
void disp_LCM3(int x,int y,int z)
{
    int lcm;
    lcm=x;
    while(1)
    {
        if(lcm%x==0 && lcm%y==0 && lcm%z==0)
        {
            printf("%d",lcm);
            break;
        }
    lcm++;
    }
}
