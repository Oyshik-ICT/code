#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    vector <int> vec;
     vector <int> :: iterator it;

     vec.push_back(200);
     vec.push_back(25);
     vec.push_back(16);
     vec.push_back(30);
     vec.push_back(20);

     vec.reverse();

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
     }

     cout<<endl;

     sort(vec.begin(),vec.begin()+3);



     for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
     }
     return 0;

}
