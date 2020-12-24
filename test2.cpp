#include <bits/stdc++.h>

using namespace std;

int a[200000];

int b_search(int comp,int j)
{
    int l,r,mid;
    l=0;
    r=j-1;
    if(comp>a[0]){
        return 1;
    }
    else if(comp<a[j-1]){
        return j+1;
    }
    else{
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==comp){
                return mid+1;
            }
            if(a[mid]<comp){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(a[mid]<comp){
            return mid+1;
        }
        else{
            return mid+2;
        }
    }
}

int main()
{
      set <int> v;
     set <int>:: iterator it;
    int n,m,s,j=0,i,value,k=0;
    int c[200000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        v.insert(s);
    }
    cin>>m;
    int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    for(it=v.begin();it!=v.end();it++){
        a[j]=*it;
        j++;
    }
    reverse(a,a+j);
    for(i=0;i<m;i++){
        value=b_search(b[i],j);
        c[k]=value;
        k++;
    }
    for(i=0;i<k;i++){
        cout<<c[i]<<endl;
    }
    return 0;
}
