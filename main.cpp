#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char c;
    bool flag=true;
    while(c=getchar(),c!='/n'){
        if(c=='\"'){
            if(flag==true){
            putchar('\`');
            putchar('\`');
         }
           else{
            putchar('\'');
            putchar('\'');
          }
     flag==false;
    }
    else{
        putchar(c);
    }

    }
    return 0;
}
