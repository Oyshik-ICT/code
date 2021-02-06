#include<stdio.h>


int main()
{
    int  n,x,i,val,p,sum=0;
    scanf("%d%d",&n,&x);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&val,&p);
        a[i]=val;
        b[i]=p;
    }
    x=x*100;
    for(i=0;i<n;i++){
        sum=sum+a[i]*b[i];
        if(sum>x){
            printf("%d\n",i+1);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
