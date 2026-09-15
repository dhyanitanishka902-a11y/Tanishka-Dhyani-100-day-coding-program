include <stdio.h>
#include <math.h>
int main()
{
    int i,sum = 0;
    printf("Input = ");
    scanf("%d",&i);
    while (i>=1)
    {
        sum = sum + i;
        i--;
    }
    printf("The sum of first n natural numbers is = %d\n",sum);
    return 0;

}
