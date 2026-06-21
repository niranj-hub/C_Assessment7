#include <stdio.h>
void disp_count_HCF2(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    disp_count_HCF2(x,y);
}
void disp_count_HCF2(int x,int y)
{
    int hcf;
    hcf=x;
    while(1)
    {
        if(x%hcf==0 && y%hcf==0)
        {
            printf("%d",hcf);
            break;
        }
    hcf--;
    }
}
