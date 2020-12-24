#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;

    int q,type,num;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>type>>num;
        if(type==1){
            s.insert(num);
        }
        else if(type==2){
            it=s.find(num);
            if(it==s.end()){
                continue;
            }
            else{
                s.erase(it);
            }
        }
        else if(type==3){
            it=s.find(num);
            if(it==s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;

}
