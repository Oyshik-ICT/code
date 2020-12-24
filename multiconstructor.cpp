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
    integer(int m,int n)
    {
        x=m;
        y=n;
    }
    integer(integer &i)
    {
        x=i.x;
        y=i.y;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    integer a;
    integer b(20,30);
    integer c(b);
    a.show();
    b.show();
    c.show();

    return 0;
}
