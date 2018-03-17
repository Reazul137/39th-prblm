#include<stdio.h>
int main()
{
    int x, y, i, sum=0, temp;

    printf("Type the first number : ");
    scanf("%d",&x);

    printf("Type the second number : ");
    scanf("%d",&y);

    if(x>y)
    {
        temp=y;
        y=x;
        x=temp;
    }
    for(i=x; i<=y; i++)
    {
        if((i%17) != 0)
        {
            sum += i;
        }
    }
    printf("\n Sum : %d",sum);

    return 0;
}
