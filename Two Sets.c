#include<stdio.h>

int main()
{
    unsigned long long int n,i,count=0,p,k;
    scanf("%llu",&n);
    p=n;
    unsigned long long int sum=(n*(n+1))/2;
    unsigned long long int div=sum/2;
    unsigned long long int B[p/2];
    unsigned long long int A[p+1];
    for(i=1; i<=p; i++)
        A[i]=i;
    k=sum%2;
    if(k==1)
    {
        printf("NO\n");
    }

    else
    {
        printf("YES\n");

        while(div!=0)
        {
            if(div>n)
            {
                B[count]=n;
                div=div-n;
                n--;
                count++;

            }
            else
            {
                B[count]=div;
                div=0;
                count++;
            }
        }
        printf("%llu\n",count);
        for(i=0; i<count; i++)
        {
            printf("%llu ",B[i]);
            A[B[i]]=0;
        }
        printf("\n%llu\n",p-count);
        for(i=1; i<=p; i++)
        {
            if(A[i]>0)
                printf("%llu ",A[i]);

        }
    }
}
