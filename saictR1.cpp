#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float x1,x2,y1,y2,z1,z2;
    float d, result1,result2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    d=(x1*y2)-(x2*y1);
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);
    result1=((z1*y2)-(z2*y1))/d;
    result2=((x1*z2)-(z1*x2))/d;
    cout<<result1<<endl<<result2<<endl;
    return 0;
}
