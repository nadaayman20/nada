#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int x,y,number ;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
    scanf("%d%d",&x,&y);

    if(x<y){
        printf("<\n");
    }
    else if (x>y){
        printf(">\n");
        }
    else {
            printf("=\n");
    }
}
return 0;
}
