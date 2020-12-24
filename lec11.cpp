#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float n1,n2,add,sub,mul,div;
    cout<<"Enter two number : ";
    cin>>n1>>n2;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);
    add=n1+n2;
    cout<<setw(20)<<"Addition is : "<<add<<endl;
    sub=n1-n2;
    cout<<setw(20)<<"Sub is : "<<sub<<endl;
    mul=n1*n2;
    cout<<setw(20)<<"Multiplication is : "<<mul<<endl;
    div=n1/n2;
    cout<<setw(20)<<"Division is : "<<div<<endl;
    return 0;
}
