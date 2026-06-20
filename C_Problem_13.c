#include <stdio.h>
void disp_reverse_number(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_reverse_number(x);
}
void disp_reverse_number(int x)
{
    int rev,rem;
    rev=0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
     printf("%d",rev);
}
