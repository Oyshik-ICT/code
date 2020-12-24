#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t,a,b,sum;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==0 || b==0){
            cout<<"0"<<endl;
        }
        else{
            if(a==b){
                cout<<(a+b)/3<<endl;
            }
            else{
                    sum=(a+b)/3;
                if(a<b){
                    cout<<min(sum,a)<<endl;
                }
                else{
                    cout<<min(sum,b)<<endl;
                }
            }
        }
    }
    return 0;
}
