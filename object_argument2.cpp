#include<iostream>

using namespace std;

class time
{
    int hour;
    int minutes;

public:
    void getdata(int h,int m)
    {
        hour=h;
        minutes=m;
    }
    void showdata()
    {
        cout<<"hour : "<<hour<<endl;
        cout<<"mintues : "<<minutes<<endl;
    }
    void add(time t1,time t2)
    {
        minutes=t1.minutes+t2.minutes;
        hour=minutes/60;
        minutes=minutes%60;
        hour=hour+t1.hour+t2.hour;
    }
};
int main()
{
    time t1,t2,t3;
    t1.getdata(2,45);
    t2.getdata(3,30);
    t3.add(t1,t2);
    t3.showdata();
    return 0;
}
