#include<iostream>
#include<string>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    int total=0;
    string st;
    getline(cin,st);
    set<char>s;
    set<char> :: iterator it;

    for(int i=0;i<st.length();i++){
        s.insert(st[i]);
    }
    for(it=s.begin();it!=s.end();it++){
        if(*it>='a' && *it<='z'){
            total++;
        }
    }

    cout<<total<<endl;
    return 0;
}
