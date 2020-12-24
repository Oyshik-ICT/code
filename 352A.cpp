#include<iostream>

 using namespace std;

int main()
{
    int n,c5=0,c0=0,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==5){
            c5++;
        }
        else{
            c0++;
        }
    }
    if(c0==0){
        cout<<"-1"<<endl;
    }
    else{
        if(c5<9){
            cout<<"0"<<endl;
        }
        else{
            for(int i=1;i<=(c5/9)*9;i++){
                cout<<"5";
            }
              for(int i=1;i<=c0;i++){
                cout<<"0";
            }
        }
    }
    cout<<endl;
    return 0;

}
