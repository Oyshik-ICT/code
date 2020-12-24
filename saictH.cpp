#include<iostream>
using namespace std;


int main()
{
    int n,m,T,i,j,total,sum=0;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>n>>m;
        total=-m;
        for(j=1;j<=n;j++){
            if(total<0){
                sum=sum-j;
                total++;
            }
           else if(total>=0){
                sum=sum+j;
                total++;
                if(total==m){
                    total=-m;
                }
            }
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
        sum=0;
    }
    return 0;
}
