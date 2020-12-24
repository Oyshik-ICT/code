#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<int>v;
     list<int> :: iterator it;
    int n,num,s=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    v.pop_front();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

}
