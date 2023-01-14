#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x*2<y || y*2<x)
        {
            printf("NO\n");
        }
        else
        {
            x=x%3;
            y=y%3;
            while(x!=0 && y!=0)
            {
                if(x>y)
                {
                    x-=2;
                    y-=1;
                }
                else
                {
                    x-=1;
                    y-=2;
                }
            }
            if(x==0 && y==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
