#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string s,a;
    int n,i;
    vector<string>v1,v2;
    cin>>n;
    getchar();
    for(i=0;i<n;i++){
        getline(cin,s);
        if(i==0){
            a=s;
        }
        if((a.compare(s))!=0){
            v2.push_back(s);
        }
        else{
            v1.push_back(s);
        }
    }
    if(v1.size()>v2.size()){
        cout<<v1[0]<<endl;
    }
    else{
        cout<<v2[0]<<endl;
    }
    return 0;
}
