#include <stdio.h>
void main()
{
    int n, i;
    int f = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Factorial doesn't exist");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f=f*i;     
        }
        printf("Factorial=%d ",f);
    }

}



