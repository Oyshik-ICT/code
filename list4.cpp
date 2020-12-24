#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    int n,num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   list <int> mylist(a,a+n);
   list <int> :: iterator it;

   it=find(mylist.begin(),mylist.end(),a[2]);
   cout<<*it<<endl;
   // for(it=mylist.begin();it!=mylist.end();it++){
        //cout<<*it<<endl;
   // }
    return 0;
}
