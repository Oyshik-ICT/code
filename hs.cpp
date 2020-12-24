#include<iostream>

using namespace std;

#define int a[n][k]

int main()
{
    int i,j;
    int n,k;
    cin>>n;
    for(i=0;i<n;i++){

            cin>>k;
        for(j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
