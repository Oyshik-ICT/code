#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,b,c1,c2=1,temp;
    cin>>n>>b;
    c1=b/2;
    temp=n-1;
    if(temp==b && b%2==0){
        cout<<"0"<<endl;
    }
    else if(n==b){
        cout<<"0"<<endl;
    }
    else{
        while(1){
            n=n-2;
            if(n%2!=0){
                    if(n==b || b==n-1){
                break;
            }
        }
        if(n%2==0){
            if(n==b || n<b){
                break;
            }
        }
        c2++;
        }
    cout<<min(c1,c2)<<endl;
    }

    return 0;

}
