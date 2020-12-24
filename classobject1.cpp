#include<iostream>

using namespace std;

class student
{
public:
    int id;
    float age;
    void display()
    {
           cout<<id<<"  "<<age<<endl;
    }
};
int main()
{
    student atik;
    atik.id=2037;
    atik.age=20.15;
    atik.display();
    return 0;
}
