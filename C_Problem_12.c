#include <stdio.h>
void count_total_digits(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    count_total_digits(x);
}
void count_total_digits(int x)
{
    int sum,rem;
    sum=0;
    while(x!=0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
     printf("%d",sum);
}
