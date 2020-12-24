#include<iostream>
using namespace std;

class item
{
public:
    int number;
    float cost;
    void getdata(int a,float b);
    void display()
    {
        cout<<number<<endl<<cost<<endl;
    }
};
    inline void item :: getdata(int a,float b)
    {
        number=a;
        cost=b;
    }
    int main()
    {
        item one;
        one.getdata(100,25.5);
        one.display();
        return 0;
    }
