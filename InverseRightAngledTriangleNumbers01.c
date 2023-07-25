//InverseRightAngledTriangleNumbers01
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
            printf("%d ",j+1);
        }
        count--;
        printf("\n");
    }

    return 0;
}