#include<stdio.h>
#include<math.h>

void tower_of_hanoi(int n,int a,int b,int c);

int main(void)
{
    int n;
    scanf("%d",&n);
    int ans=pow(2,n)-1;
    printf("%d\n",ans);

    tower_of_hanoi(n,1,3,2);

    return 0;
}

void tower_of_hanoi(int n,int a,int c,int b)
{
    if(n==0)
        return;
    tower_of_hanoi((n-1),a,b,c);
    printf("%d %d\n",a,c);
    tower_of_hanoi((n-1),b,c,a);
}
