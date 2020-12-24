#include<iostream>

using namespace std;

int main()
{
    int n,m,s,x,c1=0,c2=0;
    cin>>n;
        for(int i=0;i<n;i++){
        cin>>x;
        if(i==0){
        m=x;
        s=x;
        }
        if(x>m){
            c1++;
            m=x;
        }
        else if(s>x){
            c2++;
            s=x;

        }
    }
    cout<<c1<<" "<<c2<<endl;

    return 0;
}
