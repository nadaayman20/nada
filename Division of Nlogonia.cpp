#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   int k,x,y,n,m;

    scanf("%d",&k);
    while(k!=0){
        scanf("%d%d",&n,&m);
        for(int i=0;i<k;i++){
                 scanf("%d%d",&x,&y);
                 if(x == n || y == m) {
                       printf("divisa");}
                 else if(x > n && y > m){
                        printf("NE");}
                 else if(x > n && y < m){
                        printf("SE");}
                 else if(x < n && y > m){
                        printf("NO");}
                 else if(x < n && y < m){
                       printf("SO");}

        }
    }

    return 0;
}
