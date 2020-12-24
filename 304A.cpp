#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,z,c=0;
    cin>>n;
    for(x=1;x<=n;x++){
        for(y=x;y<=n;y++){
            z=sqrt(x*x+y*y);
            if(z<=n && z*z==x*x+y*y){
                c++;
            }
        }
    }
    cout<<c<<"\n";

    return 0;
}
