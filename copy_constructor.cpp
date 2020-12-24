#include<iostream>

using namespace std;

class code
{
    int id;
public:
    code()
    {

    }
    code(int a)
    {
        id=a;
    }
    code(code &m)
    {
        id=m.id;
    }
    void display()
    {
        cout<<id<<endl;
    }
};

int main()
{
    code A(100);
    code B(A);

    A.display();
    B.display();

    return 0;
}
