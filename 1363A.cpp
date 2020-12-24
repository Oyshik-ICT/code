#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,num,e,o,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        e=0;
        o=0;
        while(n--){
            cin>>num;
            if(num%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(o==0){
            cout<<"No"<<"\n";
        }
        else if(x%2!=0 && o>=x){
            cout<<"Yes"<<"\n";
        }
        else if(x%2!=0 && o<x){
            if(o%2!=0){
                cout<<"Yes"<<"\n";
            }
            else if((x-o+1)<=e){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
        else if(x%2==0 && (x<o || x>o)){
            if(x>o){
                if(o%2!=0){
                    cout<<"Yes"<<"\n";
                }
                else{
                    if((x-o+1)<=e){
                        cout<<"Yes"<<"\n";
                    }
                    else{
                        cout<<"No"<<"\n";
                    }
                }
            }
            else{
                if(e>=1){
                    cout<<"Yes"<<"\n";
                }
                else{
                    cout<<"No"<<"\n";
                }
            }
        }
        else if(x%2==0 && x==o){
            if(e>=1){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
    }

    return 0;
}
