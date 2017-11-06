#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i=0,max=0,count=0; 
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
    for(i=0; i<n; i++){
        if(max<height[i]){
            max=height[i];
        }
    }
    for(i=0; i<n; i++){
        if(max==height[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}