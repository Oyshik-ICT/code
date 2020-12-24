#include<iostream>

using namespace std;

class student
{
     public:
    string first;
    string last;
    int age;
    int sd;
};

int main()
{
    student s;
    cin>>s.age>>s.first>>s.last>>s.sd;
    cout<<s.age<<endl;
    cout<<s.last<<","<<" "<<s.first<<endl;
    cout<<s.sd<<endl;
    cout<<endl;
    cout<<s.age<<","<<s.first<<","<<s.last<<","<<s.sd<<endl;

    return 0;

}
