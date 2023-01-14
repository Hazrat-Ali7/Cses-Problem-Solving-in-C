#include<stdio.h>
#include<string.h>


int main()
{
    char A[1001000],alpha;
    scanf("%s",&A);
    int middle=-1,l=0,m=strlen(A)-1;

    int frequency[27],odd=0,rev=0,i,j;
    for(i=0; i<27; i++)
        frequency[i]=0;

    for(i=0; i<strlen(A); i++)
        frequency[A[i]-64]++;

    for(i=0; i<27; i++)
    {
        if(frequency[i]%2==1)
        {
            odd++;
            middle=frequency[i];
            alpha=i+64;
        }

    }
    if(odd>1)
    {
        printf("NO SOLUTION");
        return 0;
    }
    for(i=0; i<27; i++)
    {
        if(frequency[i]%2==0)
        {

            for(int p=0; p<frequency[i]/2; p++)
            {
                A[l]=i+64;
                A[m]=i+64;
                l++;
                m--;
            }
        }
    }
    if(middle!=-1)
    {
        for(int k=0; k<middle; k++,l++)
        {
            A[l]=alpha;
        }
    }
    puts(A);
    return 0;
}


