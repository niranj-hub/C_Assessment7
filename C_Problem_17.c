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
    int i,flag,sum,temp;
    flag=0;
    sum=0;
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
       temp = x;
    while(temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if(flag == 0 && sum == 14)
    {
        printf("Prime & Sum of digits is 14");
    }
    else if(flag == 1 && sum == 14)
    {
        printf("Not Prime but Sum of digits is 14");
    }
    else if(flag == 0 && sum != 14)
    {
        printf("Prime & Sum of digits is not 14");
    }
    else
    {
        printf("Not Prime & Sum of digits is not 14");
    }
}
