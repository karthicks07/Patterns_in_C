//RightAngledAlphabet01
#include <stdio.h>

int main()
{
    int i=0,j=0,n,count=0;
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",65+count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
