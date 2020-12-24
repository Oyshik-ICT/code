#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> v;
    vector<int> :: iterator it;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    v.reverse();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
}
