#include<stdio.h>
#include<stdlib.h>
void display(int **,int,int);
void Mat_mul(int **,int,int,int **,int,int);
int main(void)
{
    int i,j,m,n,p,q;
    printf("Enter size of 1st matrix : ");
    scanf("%d%d",&m,&n);
    printf("\nEnter size of 2nd matrix : ");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("\nMatrix multiplication is not possible");
        exit(0);
    }
    int **a;
    a = (int **)calloc(m,sizeof(int *));
    for(i=0;i<m;i++)
    {
        a[i] = (int *)calloc(n,sizeof(int));
    }
    int **b;
    b = (int **)calloc(p,sizeof(int *));
    for(i=0;i<p;i++)
    {
        b[i] = (int *)calloc(q,sizeof(int));
    }
    printf("\nInitialization of 1st matrix : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInitialization of 2nd matrix : ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\nEnter a[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst Matrix : \n");
    display(a,m,n);
    printf("\n");
    printf("\nSecond Matrix : \n");
    display(b,p,q);
    printf("\n");
    printf("\nResultant Matrix : \n");
    Mat_mul(a,m,n,b,p,q);
    return 0;
}
void display(int **x,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
void Mat_mul(int **x,int m,int n,int **y,int p,int q)
{
    int i,j,k;
    int **c;
    c = (int **)calloc(m,sizeof(int(int*)));
    for(i=0;i<m;i++)
    {
        c[i] = (int *)calloc(q,sizeof(int));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=(x[i][k]*y[k][j]);
            }
        }
    }
    display(c,m,q);
}                   