#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=3;
    long long int mul=1;
    for(i=3;i<=505;i=i+2){
        mul=mul*pow(i,i);
    }
    cout<<mul<<"\n";
}
