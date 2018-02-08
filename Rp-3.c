#include <stdio.h>
void main()
{
  int a[100],n,i,j,t;
  printf("Enter value for n:");
  scanf("%d",&n);
  printf("Enter the value for: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
}
     printf("Maximum value = %d",a[i]);
}
  
