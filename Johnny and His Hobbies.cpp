#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,big=-1,i,f,j=0,t,x=0,y=0,k,s,q;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

    for(i=0;i<n-1;i++){
            if(a[i]==0){
                big=a[i+1];
                y=1;
                continue;
            }
            if(a[i+1]==0){
                big=a[i];
                y=1;
                continue;
            }
        if(big<abs(a[i]-a[i+1]) || y==1){
            big=abs(a[i]-a[i+1]);
        }
    }
    for(s=0;s<n;s++){
        f=a[s]^big;
        b[j]=f;
        j++;
    }
    sort(b,b+j);
    for(q=0;q<n;q++){
        if(a[q]!=b[q]){
            printf("-1\n");
            x=1;
            break;
        }
    }
    if(x==0){
        printf("%d\n",big);
    }
    x=0;
    j=0;
    big=-1;
    y=0;
}
    return 0;
}
