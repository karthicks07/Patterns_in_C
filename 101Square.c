//101Square
#include <stdio.h>

int main()
{
    int i,j,n,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j/1==1)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}
