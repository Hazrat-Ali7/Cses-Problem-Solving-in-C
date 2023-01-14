#include<stdio.h>
#include<string.h>

int main()
{
    char A[2000000];
    gets(A);
    int count=1,max=1;
    for(int i=1;i<strlen(A);i++)
    {
        if(A[i]==A[i-1])
            count++;
        else
            count=1;
        if(count>max)
            max=count;
    }
    printf("%d",max);
    return 0;
}
