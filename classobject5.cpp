#include<iostream>

using namespace std;

class student
{
public:
    int age;
    float id;
    void getdata(int x,float y);
    void display();
};
void student :: getdata(int x,float y)
{
    age=x;
    id=y;
    return;
}
void student :: display()
{
    cout<<age<<" "<<id<<endl;
    return;
}

int main()
{
     student atik;
    atik.getdata(30,78.90);
    atik.display();
    return 0;
}
