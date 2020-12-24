#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,i,x,y,carry,mod;
    vector<int>v1,v2,v3;
    vector<int> :: iterator it1;
    vector<int> :: iterator it2;
    vector<int> :: iterator it3;
    cin>>n;
    while(n--){
            carry=0;
        cin>>m;
        while(m--){
            cin>>x>>y;
            v1.push_back(x);
            v2.push_back(y);
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        it1=v1.begin();
        it2=v2.begin();
        for( it1=v1.begin(),it2=v2.begin();it1!=v1.end();it1++,it2++){
            mod=(*it1+*it2)%10;
            v3.push_back(mod+carry);
            carry=(*it1+*it2)/10;
        }
        if(carry>0){
            v3.push_back(carry);
        }
        reverse(v3.begin(),v3.end());
        for(it3=v3.begin();it3!=v3.end();it3++){
            cout<<*it3;
        }
        cout<<endl;
            if(n>0){
                    cout<<endl;
            }
            v1.clear();
            v2.clear();
            v3.clear();
    }
    return 0;
}
