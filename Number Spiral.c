#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int x,y;
        scanf("%llu%llu",&x,&y);

        if(x==y)
            printf("%llu\n",x*y-(x-1));

        else if(x>y)
        {
            if(x%2==1)
                printf("%llu\n",(x-1)*(x-1)+y);
            else
                printf("%llu\n",x*x-y+1);
        }
        else
        {
            if(y%2==1)
                printf("%llu\n",y*y-x+1);
            else
                printf("%llu\n",(y-1)*(y-1)+x);
        }

    }
    return 0;
}

