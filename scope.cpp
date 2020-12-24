#include<iostream>

using namespace std;

int x=10;

void dispaly()
{
    cout<<"In display fuction :"<<x<<endl;
}

int main()
{
    x=20;
    cout<<"In main function :"<<x<<endl;
    dispaly();
    return 0;
}
