#include<iostream>

using namespace std;

class student
{
public:
    int age;
    float id;
    student(int x,float y)
    {
        age=x;
        id=y;
    }
    void display()
    {
        cout<<age<<" "<<id<<endl;
        return;
    }
};

int main()
{
    class student atik(100,23.52);
    atik.display();
    return 0;
}
