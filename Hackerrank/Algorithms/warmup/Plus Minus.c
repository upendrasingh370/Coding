#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    double count_zero=0,count_neg=0,count_pos=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]==0)
            {
            count_zero+=1;
        }
        else if(arr[arr_i]>0)
            {
            count_pos+=1;
        }
        else if(arr[arr_i]<0)
            {
            count_neg+=1;
        }
    }
    printf("%f\n%f\n%f",count_pos/n,count_neg/n,count_zero/n);
    return 0;
}
