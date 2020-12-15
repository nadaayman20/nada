#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,a,b,i,j,max,min;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            max=0,min=100;
            for(j=1;j<=a;j++)
            {
                scanf("%d",&b);
                if(max<b)
                    max=b;
                if(min>b)
                    min=b;
            }
            printf("%d\n",(max-min)*2);
        }
    }
    return 0;
}
