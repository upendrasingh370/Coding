#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2;
    int bob=0,alice=0;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    if(a0>b0)
        {
        alice=alice+1;
    }
    else if(a0<b0)
        {
        bob=bob+1;
    }
      if(a1>b1)
        {
        alice=alice+1;
    }
    else if(a1<b1)
        {
        bob=bob+1;
    }
      if(a2>b2)
        {
        alice=alice+1;
    }
    else if(a2<b2)
        {
        bob=bob+1;
    }
    printf("%d %d",alice,bob);
    return 0;
}
