#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<string,int> p;
    p=make_pair("Oyshik",27);
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
