#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a_i,a_j; 
    scanf("%d",&n);
    int a[n][n],sum_p=0,sum_s=0,sum;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(a_i=0; a_i<n; a_i++)
        {
        sum_p+=a[a_i][a_i];
    }
    for(a_i=n;a_i>0;a_i--)
        {
        sum_s+=a[n-a_i][a_i-1];
    }
    sum=abs(sum_p-sum_s);
    printf("%d",sum);
    return 0;
}
