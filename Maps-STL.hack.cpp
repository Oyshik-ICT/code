#include<iostream>
#include<map>

using namespace std;

int main()
{
    map <string,int> m;
    int q,type,num;
    string s;
    cin>>q;
    while(q--){
        cin>>type>>s;
        if(type==1){
                cin>>num;
            m[s]=m[s]+num;
        }
        else if(type==2){
            m.erase(s);
        }
        else if(type==3){
            cout<<m[s]<<endl;
        }
    }
    return 0;
}
