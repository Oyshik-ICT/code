#include<iostream>

using namespace std;

class c2;

class c1
{
    int value1;

public:
    void getdata(int i)
    {
        value1=i;
    }
    void display()
    {
        cout<<value1<<endl;
    }

    friend void exchange(c1 &,c2 &);
};

class c2
{
    int value2;

public:
    void getdata(int i)
    {
        value2=i;
    }
    void display()
    {
        cout<<value2<<endl;
    }

    friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x,c2 &y)
{
    int temp;
    temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
    c1 a;
    a.getdata(100);
    a.display();
    c2 b;
    b.getdata(200);
    b.display();
    exchange(a,b);
    a.display();
    b.display();

    return 0;
}
