#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list <int> mylist;
    list <int> :: iterator it;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_front(1);

    mylist.reverse();

    //mylist.clear();

    mylist.size();

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}
