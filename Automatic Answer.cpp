#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   int t,n;
   scanf("%d",&t);
   while(t!=0){
        for(int i=0;i<t;i++){
     scanf("%d",&n);
     n=(((((n*567)/9)+7492)*235)/47)-498;
     if (n<0)
        n=n* -1;
        n=(n/10)%10 ;
        printf("%d\n",n);
        }
   }
    return 0;
}
