#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int x,y,number ;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
    printf("x =");
    scanf("%d",&x);
    printf("y =");
    scanf("%d",&y);
    if(x<y){
        printf("the relationship between them is <\n");
    }
    else if (x>y){
        printf("t the relationship between them is >\n");
        }
    else {
            printf("t the relationship between them is =\n");
    }
}
return 0;
}
