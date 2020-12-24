#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int len;
    while(std::getline(std::cin,s)){
        cout<<s<<endl;
        cout<<s.size()<<endl;

    }
    return 0;
}
