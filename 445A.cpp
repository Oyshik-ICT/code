#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    int n,m,i,j;
    string a;
    scanf("%d%d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
        getline(cin,a);
        for(j=0;j<m;j++){
            if(a[j]=='-'){
                continue;
            }
           else  if(i%2==0){
                if(j%2==0){
                    a[j]='W';
                }
                else{
                    a[j]='B';
                }
            }
            else{
                if(j%2==0){
                    a[j]='B';
                }
                else{
                    a[j]='W';
                }
            }
        }
        cout<<a<<endl;
}

    return 0;
}
