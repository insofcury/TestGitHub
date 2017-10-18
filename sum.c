#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, sum = 0, a, b, c, d, e, f=0;
    scanf("%d", &N);
    for(i=2; i<N/2;i++)
    {
        if(N%i==0)
            f=1;


    }
    d=N;
    for( i = 2 ; i <= N ; i++)
    {
        if(N%i == 0)
        {
            a=0;
            b=0;
            c=0;
            if(i>9)
            {
                 a= i/100;
                 b= i/10-a*10;
                 c= i/1 -b*10 -a*100;
                 sum=sum+a+b+c;
            }
            else
            sum = sum + i;

            N = N/i;
            i=2;
        }
    }

    a= d/100;
    b= d/10-a*10;
    c= d/1 -b*10 -a*100;


   if(f==0)
        e=0;
   else if(((a+b+c)==sum))
        e=1;

    else
        e=0;
    printf("%d", e);



    return 0;
}
