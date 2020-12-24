#include<iostream>

using namespace std;



class test
{
    int x,y;
public:

    test()
    {

    }
    test( int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    ~test()
    {
        cout<<"exit"<<endl;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    test t1(10,20);
    t1.show();


    return 0;
}
