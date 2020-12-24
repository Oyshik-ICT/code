#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    list <int> mylist;
    list <int> :: iterator it;
    mylist.push_back(10);
    mylist.push_back(11);
    mylist.push_back(12);
    mylist.push_back(13);
    mylist.push_back(14);

    it=find(mylist.begin(),mylist.end(),12);

    mylist.insert(it,7);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}
