#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int k,c=0,i,len,j=0,t=0,div,p=0,s;
    string a;
    char d[1001],e[1001];
    int b[1001];
    cin>>k;
    getchar();
    getline(cin,a);
    len=a.length();
    sort(a.begin(),a.end());
    for(i=0;i<len-1;i++){
        if(a[i]==a[i+1]){
            c++;
            continue;
        }
        else{
                c++;
            b[j]=c;
            if(c%k!=0){
                cout<<"-1"<<endl;
                return 0;
            }
            c=0;
            j++;
            d[t]=a[i];
            t++;
        }
    }
    c++;
    b[j]=c;
    if(c%k!=0){
        cout<<"-1"<<endl;
        return 0;
    }
    d[t]=a[i];
    for(i=0;i<=j;i++){
        div=b[i]/k;
        for(s=0;s<div;s++){
            e[p]=d[i];
            p++;
        }
    }
    e[p]='\0';
    for(i=0;i<k;i++){
        cout<<e;
    }
    cout<<endl;
}
