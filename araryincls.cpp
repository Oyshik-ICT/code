#include<iostream>

using namespace std;

const int m=50;

class item
{
    int itemcode[m];
    int itemprice[m];
    int total;

public:
    void CNT()
    {
        total=0;
        return;
    }
    void getitem();
    void displaysum();
    void remove();
    void displayitem();
};
void item :: getitem()
{
    cout<<"Enter item code : ";
    cin>>itemcode[total];
    cout<<"Enter item price : ";
    cin>>itemprice[total];
    total++;
    return;
}
void item :: displaysum()
{
    int sum=0;
    for(int i=0;i<total;i++){
        sum=sum+itemprice[i];
    }
    cout<<"Sum : "<<sum<<endl;
    return;
}
void item :: remove()
{
    int a;
    cout<<"Enter item code : ";
    cin>>a;
    for(int i=0;i<total;i++){
        if(itemcode[i]==a){
            itemprice[i]=0;
            break;
        }
    }
    return;
}
void item :: displayitem()
{
    for(int i=0;i<total;i++){
        cout<<itemcode[i]<<" "<<itemprice[i]<<endl;
    }
    return;
}
int main()
{
    item order;
    order.CNT();
    int x;
    do
    {
        cout<<"Enter your number"<<endl;
        cout<<"Press 1 for add a number"<<endl;
        cout<<"Press 2 for display total value"<<endl;
        cout<<"Press 3 for delete a item"<<endl;
        cout<<"Press 4 for display all the item"<<endl;
        cout<<"Press 5 for quite"<<endl;
        cout<<"Enter the number : ";
        cin>>x;
        switch(x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaysum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayitem();
            break;
        case 5:
            break;
        default:
            cout<<"Error try again"<<endl;
        }
    }
    while(x!=5);
    return 0;
}
