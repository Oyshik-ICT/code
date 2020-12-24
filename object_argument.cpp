#include<iostream>

using namespace std;

class weight
{
    int kg;
    int gm;

public:
    void getdata();
    void showdata();
    void add(weight w1,weight w2);
};

void weight :: getdata()
{
    cout<<"Enter kg and gm : ";
    cin>>kg>>gm;
}
void weight :: showdata()
{
    cout<<"kg is "<<kg;
    cout<<"gm is "<<gm;
}
void weight :: add(weight w1,weight w2)
{
    gm=w1.gm+w2.gm;
    kg=gm/1000;
    gm=gm%1000;
    kg=kg+w1.kg+w2.kg;
}
int main()
{
    weight w1,w2,w3;
    w1.getdata();
    w2.getdata();
    w3.add(w1,w2);
    w3.showdata();
    return 0;
}
