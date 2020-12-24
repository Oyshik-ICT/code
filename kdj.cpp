#include<iostream>

using namespace std;

class item
{
    int a;
public:
    void getdata()
    {
        cin>>a;
    }
    void showdata()
    {
        cout<<a;
    }
};
int main()
{
    item t;
    t.getdata();
    t.showdata();
    return 0;
}
