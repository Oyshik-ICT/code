#include<iostream>

using namespace std;

class item
{
public:
    char a[30];
    int cost;
    void putdata();
    void getdata()
    {
        cout<<"Enter the name : ";
        cin>>a;
        cout<<"Enter the price : ";
        cin>>cost;
        return;

    }
};
void item :: putdata()
{
        cout<<"Book name is : "<<a<<endl;
        cout<<"Price is : "<<cost<<endl;
        return;
}
int main()
{
    item s;
    s.getdata();
    s.putdata();
    return 0;
}
