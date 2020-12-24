#include<iostream>

using namespace std;

class integer
{
    int x,y;
public:
    integer(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    integer i(20,100);
    integer j(45,7883);
    cout<<"i"<<" "<<":";
    i.show();
    cout<<"j"<<" "<<":";
    j.show();
}
