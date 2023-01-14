#include<stdio.h>

int main()
{
    int n,p;
    scanf("%d",&p);

    /* Total combination with two knight with full board
        nCr = n! / r! * (n – r)!
        r=2;  n!/2!*(n-2)!
        =n*(n-1)*(n-2)!/(2!*(n-2)!)
        =n*(n-1)/2

        2 knight attack each other in 2*3 or 3*2 square size 2 times.
        [2*3] row wise attack= ((n-2)*(n-1))*2;
        [3*2] column wise attack= ((n-2)*(n-1))*2;

    for(n=1;n<=p;n++)
    {
        unsigned long long int total_combo=(n*n*(n*n-1))/2;
        unsigned long long int attack= ((n-2)*(n-1)*2)*2;
        unsigned long long int result= total_combo-attack;
        printf("%llu\n",result);


        Needs to optimise calculation
    }
    */
    for(n=1; n<=p; n++)
    {
        unsigned long long int total_combo,total_combo_muliply,attack,result;

        if(n%2==0)
        {
            total_combo=(n*n-1);
            total_combo_muliply= n*n/2;
        }
        else
        {
            total_combo=(n*n-1)/2;
            total_combo_muliply= n*n;
        }

        attack= (4*n*n-12*n+8);

        result= total_combo*total_combo_muliply-attack;
        printf("%llu\n",result);

    }
}
