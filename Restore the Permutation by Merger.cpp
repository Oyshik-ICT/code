#include<iostream>

using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--){
        int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int b[101];
        cin>>n;
        for(i=0;i<2*n;i++){
            cin>>b[i];
        }
        for(j=0;j<2*n;j++){
            if(a[b[j]]==0){
                a[b[j]]=b[j];
                cout<<b[j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
