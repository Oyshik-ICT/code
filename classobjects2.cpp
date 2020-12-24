#include<iostream>

using namespace std;

class student
{
public :
    int age;
    float salary;
public :
    void display()
    {
        cout<<age<<"  "<<salary<<endl;
    }
};

int main()
{
    student atik;
    atik.age=20;
    atik.salary=50.25;
    atik.dispaly();
    return 0;
}

