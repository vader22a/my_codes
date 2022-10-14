#include<stdio.h>
void main()
{
    int f[20][20],s[20][20],mul[20][20],i,j,k,m,n,p,q,sum=0;
    printf("Enter the number of rows and columns of first matrix \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&f[i][j]);
    }
    printf("Enter the number of rows and columns of second matrix \n");
    scanf("%d%d",&p,&q);
    if(n!=p)
        printf(" Matrix multiplication not possible");
    else
    {
        printf("Enter the elements of second matrix \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
                scanf("%d",&s[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
         for(j=0;j<q;j++)
         {
             for(k=0;k<m;k++)
             {
                 sum=sum+f[i][k]*s[k][j];
            }
            mul[i][j]=sum;
            sum=0;
         }
    }
    printf("Product of matrices is \n");
    for(i=0;i<m;i++)
    {
         for(j=0;j<q;j++)
         {
              printf("%d ",mul[i][j]);
         }
         printf("\n");
    }
}

