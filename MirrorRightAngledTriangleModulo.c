//MirrorRightAngledTriangleModulo
#include <stdio.h>

int main()
{
    int i=0,j=0,k=0,n,a=1,count=1;
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=0;k<a;k++)
        {
            printf("%d",count%2);
            count++;
        }
        printf("\n");
        a++;
    }

    return 0;
}
