#include<iostream>
using namespace std;

class item
{
private:
    void read();
public:
    void display();
};
void item :: read()
{
    cout<<"It is private"<<endl;
}
void item :: display()
{
    cout<<"It is public"<<endl;
    read();
}
int main()
{
    item one;
    one.display();
    //one.read();
    return 0;
}
