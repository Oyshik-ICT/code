#include<bits/stdc++.h>

using namespace std;

const int s = 1000;

int ara[s];

void seive()
{
    int i,j;
    int root=sqrt(s);
    for(i=2;i<=root;i++){
        if(ara[i]==0){
            for(j=2;i*j<=s;j++){
                ara[i*j]=1;
            }
        }
    }
}

int main()
{
    seive();
    int num;
    cin>>num;
    if(ara[num]==0){
    cout<<"It is a prime number"<<"\n";}
    else{
        cout<<"It is not a prime number"<<"\n";
    }

    return 0;
}
