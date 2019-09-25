#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int count,temp;

    printf("How many numbers are you going to enter:");
    scanf("%d",&count);
    int mat[count];
    printf("Enter the numbers that you want to get sorted:");
    for(i=0; i<count; i++)
    {
        scanf("%d",&mat[i]);
    }
    for(i=0; i<count-1; i++)
    {
        int swap;

        for( j=0; j<count-1-i; j++)
        {

            if(mat[j]>mat[j+1])
            {
                int temp=mat[j];
                mat[j]=mat[j+1];
                mat[j+1]=temp;
                swap=1;
            }
        }

        if(swap==0)
        {
            break;
        }
    }
    for(i=0; i<count; i++)
    {
        printf("%d,",mat[i]);
    }

    return 0;
}
