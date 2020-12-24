#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,i,dif,mini=100000,j;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(i=0,j=n-1;;i++,j++){
        dif=a[j]-a[i];
        if(mini>dif){
            mini=dif;
        }
        if(j+1==m){
            break;
        }
    }
    cout<<mini<<endl;
    return 0;
}
