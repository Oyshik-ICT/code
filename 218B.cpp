#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    vector<int>v1,v2;
    vector<int> :: iterator it;
    int n,m,i,x,sum1=0,sum2=0;
    cin>>n>>m;
    for(i=0;i<m;i++){
            cin>>x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    for(i=0;i<n;i++){
        it=v1.begin();
        sum1=sum1+*it;
        *it=*it-1;
        if(*it<=0){
            v1.erase(v1.begin());
        }
        v1[0]=*it;
    }
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    for(i=0;i<n;i++){
        it=v2.begin();
        sum2=sum2+*it;
        *it=*it-1;
        if(*it<=0){
            v2.erase(v2.begin());
        }
        v2[0]=*it;
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    }

    cout<<sum2<<" "<<sum1<<endl;

    return 0;

}
