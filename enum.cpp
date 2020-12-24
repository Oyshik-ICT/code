#include<iostream>

using namespace std;

enum shape{
    circle,
    rectangular,
    triangle,
};
int main()
{
    int code;
    cout<<"Enter a code :";
    cin>>code;
    while(code>=circle && code<=triangle){
        switch(code)
        {
        case circle:
            cout<<"It is a circle"<<endl;
            break;
        case rectangular:
            cout<<"It is a re"<<endl;
            break;
        case triangle:
            cout<<"It is a triangle"<<endl;
            break;
        }
        cout<<"Enter a number :";
        cin>>code;
    }
    cout<<"Bye"<<endl;
    return 0;
}
