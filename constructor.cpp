#include<iostream>

using namespace std;

class integer
{
    int x,y;

public:

    integer()
    {
        x=0;
        y=0;
    }

    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    integer j;

    j.show();
}
