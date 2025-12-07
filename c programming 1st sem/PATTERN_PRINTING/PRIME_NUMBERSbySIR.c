#include<stdio.h>
int prime();
int main ()
{
    int i,res;
    for(i=1;i<=100;++i)
    {
        res=prime();
        if(res!=0)
        
            printf("%d\n",res);

        
    }
    return 0;
}

int prime()
{
    static int n=100;
    n++;
    int k;
    int c=0,i;
    for(k=n;k<=200;++k)
    {
        c=0;
        for(i=2;i<k;++i)
        {
            if(k%i==0)
            {
                c++;
            }
        }
        if(c==0){
            return k;
        }
        else 
        return 0;
    }
}