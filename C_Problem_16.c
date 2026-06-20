#include <stdio.h>
void check_prime(int x);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    check_prime(x);
    return 0;
}
void check_prime(int x)
{
    int i,flag;
    flag=0;
    if(x<=1)
    {
        flag=1;
    }
    else
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
              flag=1;
              break;
            }
        }
    }
    if(flag==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
