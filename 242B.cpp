#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,li,ri,t2=-1,c=-1;
    long long int t1=10000000000;
    cin>>n;
    if(n==1){
        printf("1\n");
        return 0;
    }
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>li>>ri;
        a[i]=li;
        b[i]=ri;
    }
    for(i=0;i<n;i++){
        if(t1>a[i]){
            t1=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(t2<b[i]){
            t2=b[i];
        }
    }
    for(i=0;i<n;i++){
        if(t1==a[i] && t2==b[i]){
            c=i;
        }
    }
    if(c==-1){
        printf("-1\n");
    }
    else{
        printf("%d\n",c+1);
    }
    return 0;
}
