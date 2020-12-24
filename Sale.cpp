#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,x,i=0,sum=0,j,y=0;
    int a[100];
    cin>>n>>m;
    while(n--){
        cin>>x;
        if(x<0){
                a[i]=abs(x);
                i++;
        }
        }
    sort(a,a+i);
    for(j=i-1;;j--){
        if(y==m || j<0){
            break;
        }
        sum=sum+a[j];
        y++;
    }
    cout<<sum<<endl;
    return 0;
}
