#include<iostream>
using namespace std;

class item
{
private:
    void read()
    {
        cout<<"It is private"<<endl;
    }
public:
    void display()
    {
        cout<<"It is public"<<endl;
        read();
    }
};
int main()
{
    item one;
    one.display();
    return 0;
}
