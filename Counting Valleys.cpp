#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string a;
    int n,i,r=0,c=0,level=0;
    cin>>n>>a;
    for(i=0;i<n;i++){
        if(a[i]=='U'){
            level++;
        }
        else{
            level--;
        }
        if(level==0){
            r=0;
        }
        if(r==0 && level<0){
            c++;
            r=1;
        }
    }
    cout<<c<<endl;
    return 0;
}
