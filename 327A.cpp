#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0,m=-1,m1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            m1++;
        }
    }
    if(n==m1){
        printf("%d\n",n-1);
        return 0;
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            c++;
        }
        if(a[i]==1){
            if(c>m){
                m=c;
                c=0;
            }
            else{
                c=0;
            }
        }
    }
    if(c>m){
        m=c;
    }
    printf("%d\n",m+m1);
    return 0;
}
