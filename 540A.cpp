#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,x,y,m1,m2,j,i;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s%s",a,b);
    for(i=0,j=0;i<n;i++,j++){
        x=a[i]%48;
        y=b[i]%48;
        m1=abs(x-y);
        if(x<y){
            x=x+10;
        }
        else if(y<x){
            y=y+10;
        }
        m2=abs(x-y);
        sum=sum+min(m1,m2);
    }

    printf("%d\n",sum);

    return 0;
}
