#include<stdio.h>
#include<stdlib.h>

int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }

int main(void)
{
    int n,maxx,sum=0,x,gondola=1;
    scanf("%d %d",&n,&maxx);

    int *A= (int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
        scanf("%d",(A+i));

    qsort(A,n,sizeof(int),sort);

    for(int i=0;i<n;i++)
        printf("%d ",*(A+i));

    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(sum<=maxx)
        {
            sum+=*(A+i);
        }
        else
        {
            gondola++;
            sum=*(A+i);
        }

    }
    printf("%d\n",gondola);
    return 0;
}
