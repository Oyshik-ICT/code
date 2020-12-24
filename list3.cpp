#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    list <int> mylist;
    list <int> :: iterator it;
    mylist.push_back(11);
    mylist.push_back(20);
    mylist.push_back(1);
    mylist.push_back(14);

   // it=find(mylist.begin(),mylist.end(),13);

    //mylist.erase(it);

    sort(mylist.begin(),mylist.end());

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}
