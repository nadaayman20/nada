#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,a,b,max,min;
    scanf("%d",&n);
    while(n!=0){
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a);
            max=0,min=100;
            for(int j=1;j<=a;j++)
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
