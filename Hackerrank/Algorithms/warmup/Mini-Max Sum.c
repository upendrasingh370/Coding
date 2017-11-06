#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum=0;
    long int arr[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    int i=0;
    int small=arr[0];
    int big=arr[0];
    for(i=0; i<5; i++)
        {
        sum=sum+arr[i];
        if(arr[i]<small)
            {
            small=arr[i];
        }
        if(arr[i]>big)
            {
            big=arr[i];
        }
    }
    printf("%lld %lld",sum-big,sum-small);

    return 0;
}
