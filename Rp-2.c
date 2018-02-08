#include <stdio.h>
int main()
{
     int a, d, n, i, t;
     int sum = 0;
     printf("Enter the first term,Total elements,Difference: ");
     
     scanf("%d %d %d",&a,&n,&d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     t = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= t; i = i + d )
     {
          if (i != t)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
