#include<iostream>

using namespace std;

class item
{
    public :
    int p,b,r;
    void putdata();

    void getdata()
    {
        cin>>p>>b>>r;
        return;
    }

};
void item :: putdata()
    {
        cout<<"Pen price : "<<p<<endl;
        cout<<"Book price : "<<b<<endl;
        cout<<"Robber price : "<<r<<endl;
        return;
    }

int main()
{
    item oyshik;
    oyshik.getdata();
    oyshik.putdata();
    return 0;

}
