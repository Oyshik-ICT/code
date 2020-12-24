#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,g;
    cin>>n;
    while(n--){
            g=1;
        cin>>num;
        if(num==0){
            cout<<"1"<<endl;
        }
        else{
            for(int i=1;i<=num;i++){
                if(i%2!=0){
                    g=g*2;
                }
                else{
                    g=g+1;
                }
            }
            cout<<g<<endl;
        }
    }
    return 0;
}
