#include<iostream>

using namespace std;

class student
{
public:
    int id;
    float number;

    void setvalue(int x,float y)
    {
        id=x;
        number=y;
        return;
    }
    void display()
    {
        cout<<id<<" "<<number<<endl;
        return;
    }
};

int main()
{
    class student atik;
    atik.setvalue(100,100.52);
    atik.display();
    return 0;
}
