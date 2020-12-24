#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n,num;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> s;
        for(i=0;i<n;i++){
            cin>>num;
            s.insert(num);
        }
        cout<<s.size()<<"\n";
    }

    return 0;
}
