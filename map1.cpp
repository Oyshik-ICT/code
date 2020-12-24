#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    map<string,int> m;

    map<string,int> :: iterator it;
 //m["Oyshik"]=20;
 //m["Somit"]=10;
    m["Oyshik"];
        //m["Oyshik"]=m["Oyshik"]+20;
    //m["Somit"]=m["Somit"]+20;
    /*for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }*/

    //cout<<m["Somit"]<<endl;
    cout<<m["Oyshik"]<<endl;

    return 0;

}
