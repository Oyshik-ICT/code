#include<bits/stdc++.h>

using namespace std;

void result(int n)
{
    switch(n)
    {
    case 0:
        cout<<"O-|-OOOO";
        break;
    case 1:
        cout<<"O-|O-OOO";
        break;
    case 2:
        cout<<"O-|OO-OO";
        break;
    case 3:
        cout<<"O-|OOO-O";
        break;
    case 4:
        cout<<"O-|OOOO-";
        break;
    case 5:
        cout<<"-O|-OOOO";
        break;
    case 6:
        cout<<"-O|O-OOO";
        break;
    case 7:
        cout<<"-O|OO-OO";
        break;
    case 8:
        cout<<"-O|OOO-O";
        break;
    case 9:
        cout<<"-O|OOOO-";
        break;
    }
    printf("\n");
}

int main()
{
    int n,mod;
    cin>>n;
    if(n==0){
        result(n);
    }
    while(n>0){
        mod=n%10;
        n=n/10;
        result(mod);
    }

    return 0;
}
