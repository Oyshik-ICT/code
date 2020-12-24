#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>v;
    int n,num,s=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    while(!v.empty()){
        if(v.front()>=v.back()){
            s=s+v.front();
            v.pop_front();
        }
       else  if(v.front()<=v.back()){
            s=s+v.back();
            v.pop_back();
        }
        if(v.front()>=v.back()){
            d=d+v.front();
            v.pop_front();
        }
         else  if(v.front()<=v.back()){
            d=d+v.back();
            v.pop_back();
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
