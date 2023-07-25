//Parallelogram
#include <stdio.h>
int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);
    int count=n;
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<count;j++)
        {
            printf(" ");
        }
        count--;
        for(int k=0;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}