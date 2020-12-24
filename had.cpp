#include<iostream>

using namespace std;

class item
{
    public:
    int cost;
};
int main()
{
    item product[3];
    int i;
    for(i=0;i<3;i++){
        cin>>product[i].cost;
    }
       for(i=0;i<3;i++){
        cout<<product[i].cost;
    }
    return 0;
}
