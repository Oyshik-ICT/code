#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace  std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int i,n,num,q,x,index;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>x;
        it=lower_bound(vec.begin(),vec.end(),x);
        index=(distance(vec.begin(),it))+1;
        if(*it!=x){
            cout<<"No"<<" "<<index<<endl;
        }
        else{
             cout<<"Yes"<<" "<<index<<endl;
        }
    }
    return 0;
}
