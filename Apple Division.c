#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

    int group1=A[n-1];
    for(int i=0,j=1;i<n-j-1;i++)
    {
        //printf("%d\n",group1);
        if(group1>A[i])
            group1-=A[i];
        else
        {
            group1+=A[n-j];
            j++;
            i--;
        }
    }

    for(int i=0;i<n;i++)
        printf("%d  ",A[i]);

    //printf("%d",group1);

    return 0;
}
