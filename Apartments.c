#include<stdio.h>
#include<stdlib.h>

int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }

int main(void)
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);

    int *A= (int*) malloc(n*sizeof(int));
    int *B= (int*) malloc(m*sizeof(int));

    for(int i=0;i<n;i++)
        scanf("%d",(A+i));
    for(int i=0;i<m;i++)
        scanf("%d",(B+i));

    qsort(A,n,sizeof(int),sort);
    qsort(B,m,sizeof(int),sort);

    int count=0;

    for(int i=0,j=0;i<n && j<m;)
    {
        if(*(A+i)<*(B+j)-k)
            i++;
        else if(*(A+i)>=*(B+j)-k && *(A+i)<=*(B+j)+k)
        {
            count++;    i++;    j++;
        }
        else
            j++;
    }

    printf("%d\n",count);
    free(A);
    free(B);
    return 0;
}


