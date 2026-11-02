#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of row:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Number of rows be positive.\n");
        return 0;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
      printf("\n");
    }
    return 0;
}