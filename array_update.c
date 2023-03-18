#include<stdio.h>
int main()
{
    int array[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("Enter element:");
            scanf("%d",&array[i][j]);
        }
    }
    /*int a=0, b=1;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            if (array[i][j]%2==0)
            {
                array[i][j]=a;
            }
            else
            {
                array[i][j]=b;
            }
        }
    }*/
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
