#include<iostream>

using namespace std;

class item
{
     int total;

public:
    void getdata(int a)
    {
        total=a;
        total++;
    }
    void showtotal()
    {
        cout<<"Total : "<<total<<endl;
    }
};

int main()
{
    item a,b,c;
    a.showtotal();
    a.showtotal();
    a.showtotal();

     a.getdata(10);
    a.getdata(20);
    a.getdata(30);

        a.showtotal();
    a.showtotal();
    a.showtotal();
    return 0;
}
