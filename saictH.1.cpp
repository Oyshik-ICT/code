#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,total=0;
    cin>>n>>m;
    int s[n],p[m];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
        cin>>p[i];
    }
    for(i=0,j=0;i<m;){
            if(p[i]>=s[j]){
                total++;
                j++;
            }
            else{
                j++;
            }
            if(j==n){
                    cout<<total<<" ";
            total=0;
                i++;
                j=0;
            }
    }
    cout<<endl;
    return 0;
}
