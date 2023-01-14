#include<stdio.h>

int main()
{
    unsigned int n;
    scanf("%u",&n);
    unsigned int zero_count=0, start=5;
    while(start<=n)
    {
        zero_count+=n/start;
        start*=5;
    }
    printf("%u",zero_count);
}
/* just 5 and 5 er power dia vag korlei 0 er count peye jabo*/
