#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<iterator>

using namespace std;

int main()
{
    vector < pair<string,int> > vec;
    vector < pair<string,int> > :: iterator it;
    int num;
    string s;
    for(int i=0;i<5;i++){
        cin>>s>>num;
        vec.push_back(make_pair(s,num));
    }
    for(it=vec.begin();it!=vec.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
