#include<iostream>

using namespace std;

class cmplex
{
    float x,y;
public:
    cmplex()
    {

    }
    cmplex(float a)
    {
        x=y=a;
    }
    cmplex(float m,float n)
    {
        x=m;
        y=n;
    }
    friend cmplex sum(cmplex , cmplex);
    friend void show(cmplex);
};
cmplex sum(cmplex c1,cmplex c2)
{
    cmplex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;

    return c3;
}
void show(cmplex c)
{
    cout<<c.x<<" "<<c.y<<endl;
}

int main()
{
    cmplex A(2.7,3.5);
    cmplex B(1.6);
    cmplex C;

    C=sum(A,B);

    show(A);
    show(B);
     show(C);
}
