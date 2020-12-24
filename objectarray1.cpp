#include<iostream>

using namespace std;

class employee
{
    char name[10];
    int age ;
public:
    void getdata();
    void putdata();
};
void employee :: getdata()
{
    cout<<"Enter the name"<<" ";
    cin>>name;
    cout<<"Enter the age"<<" ";
    cin>>age;
}
void employee :: putdata()
{
    cout<<"Manager name"<<":"<<name<<endl;
    cout<<"Manager age"<<":"<<age<<endl;
}
int main()
{
    employee manager[3];
    int i;
    for(i=0;i<3;i++){
        cout<<"Manager"<<" "<<i+1<<endl;
        manager[i].getdata();
    }
    for(i=0;i<3;i++){
        cout<<"Output for manager"<<" "<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}
