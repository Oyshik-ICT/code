#include<iostream>

using namespace std;

class item
{

    int cost;
public:

    void getdata()
    {
        cin>>cost;
    }
    void putdata()
    {
        cout<<cost;
    }
};

int main()
{
    item product[3];
    int i;
    for(i=0;i<3;i++){
        product[i].getdata();
    }
       for(i=0;i<3;i++){
        product[i].putdata();
    }
    return 0;
}
