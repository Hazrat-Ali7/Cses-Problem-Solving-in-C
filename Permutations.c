#include<stdio.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
        if(n==1 || n>3){
        a=n/2; b=2*a;
        for(int i=1;i<=n/2;i++)
        {

            printf("%d %d " ,a,b);
            a--; b--;
        }

        if(n%2==1) printf("%d",n);
    }
    else
        printf("NO SOLUTION",n);
}
