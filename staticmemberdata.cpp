#include<iostream>

using namespace std;

class item
{
    static int total;
    int num;

public:
    void getdata( int a)
    {
        num=a;
        total=total+2;
        cout<<total<<endl;
    }
    void showtotal()
    {
        cout<<"Total : "<<total<<endl;
    }
};

int item :: total;
int main()
{
    item a,b,c;
    a.showtotal();
    a.showtotal();
    a.showtotal();

     a.getdata(10);
    a.getdata(20);
    a.getdata(30);

        b.showtotal();
    b.showtotal();
    b.showtotal();
    return 0;
}
