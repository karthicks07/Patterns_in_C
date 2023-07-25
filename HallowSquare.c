//HallowSquare
#include <stdio.h>

int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1)
            {
                printf("*");
            }
            else
            {
                if(j==0 || j==n-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
