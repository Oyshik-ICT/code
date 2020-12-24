#include<iostream>
#include<utility>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector< pair<string,int> > vec;
     vector< pair<string,int> > :: iterator it;

    vec.push_back(make_pair("Oyshik",27));
    vec.push_back(make_pair("Somit",28));
    vec.push_back(make_pair("Nabil",29));

    for(it=vec.begin();it!=vec.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;

}

