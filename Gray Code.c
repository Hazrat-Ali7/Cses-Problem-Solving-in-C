//unsolved

#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    char str[1000]={'1','0'};

    char tmp0='0',tmp1='1';
    for(int i=0;i<n;i++)
        str[i]=strcat(str, tmp0);


    puts(str);
}
