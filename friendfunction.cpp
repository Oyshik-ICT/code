#include<iostream>

using namespace std;

class xyz;

class abc
{
    int a;
public:
    void getdata(int i)
    {
        a=i;
    }

    friend void big(abc,xyz);
};
class xyz
{
    int b;
public:
    void getdata(int i)
    {
        b=i;
    }

    friend void big(abc,xyz);
};

void big(abc q, xyz z)
{
    if(q.a>z.b){
        cout<<"a is grater"<<endl;
    }
    else{
        cout<<"b is grater"<<endl;
    }
}
int main()
{
    abc q;
    q.getdata(5);
    xyz z;
    z.getdata(10);
    big(q,z);
    return 0;
}
