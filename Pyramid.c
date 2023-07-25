//Pyramid
#include <stdio.h>

int main()
{
    int i=0,j=0,k=0,n,a=1;
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
