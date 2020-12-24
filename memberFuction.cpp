#include<iostream>
using namespace std;

class grater
{
public:
    int a,b;
    void getdata();
    int cmp();
    void display();
};
void grater :: getdata()
{
    cout<<"Enter Two Number : ";
    cin>>a>>b;
}
int grater :: cmp()
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void grater :: display()
{
    cout<<cmp()<<endl;
}
int main()
{
    grater one;
    one.getdata();
    one.cmp();
    one.display();
    return 0;
}
