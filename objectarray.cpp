#include<iostream>

using namespace std;

class item
{

    int cost;
public:

    void getdata();
    void putdata();
};
void item :: getdata()
{
    cin>>cost;
}
void item :: putdata()
{
    cout<<cost<<endl;
}
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

