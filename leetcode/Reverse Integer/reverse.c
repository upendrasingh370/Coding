#include<math.h>
int reverse(int x) {
    int temp=x,ans=0,m;
    if(x<0)
    {
        temp=abs(temp);
    }
    while(temp>=10 || temp<=-10)
    {
        m=temp%10;
        ans=((ans)*10)+m;
        temp=temp/10;
        printf("%d\n",temp);
        
    }
    
    if(ans>214748364 || ans<-214748364)
    {
        return 0;
    }
    else if(ans==214748364 || ans==-214748364)
    {
        if(temp<=7 || temp>=-7)
        {
            m=temp%10;
            ans=((ans)*10)+m;
        }
        else
        {
            return 0;
        }
    }
    else
    {
       m=temp%10;
       ans=((ans)*10)+m; 
    }
    if(x<0)
    {
        return ans*-1;
    }
    return ans;
}