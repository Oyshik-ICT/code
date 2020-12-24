#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair <string,int > p1("Love The Way U lie",21);
    pair <string,int >p2;
    pair <string,int >p3;
    p2.first="Lost On you";
    p2.second=12;
    p3=make_pair("BD Love",13);

    cout<<p1.first<<" "<<p1.second<<endl;
     cout<<p2.first<<" "<<p2.second<<endl;
     cout<<p3.first<<" "<<p3.second<<endl;

     return 0;

}
