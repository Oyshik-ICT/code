#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    string a;
    int n,i,m;
    cin>>n>>m;
    getchar();
    for(i=0;i<n;i++){
        getline(cin,a);
        printf("%s\n",a);
    }
}
