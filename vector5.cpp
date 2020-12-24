#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec;

    vector <int> :: iterator it;
    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }
    vec.emplace_back(20);
    for( it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}
