#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={2,12,2,10,3,3};
    int res=0,i,p=0,temp,temp1=0,a1,b1;
    for(i=0;i<6;i++){
        res=res^a[i];
    }
    temp=res;
    while(temp>0){
        if(temp&1){
            p++;
            break;
        }
        p++;
        temp=temp>>1;
    }
    int mask=1<<p-1;
    for(i=0;i<6;i++){
        if(a[i]&mask){
            temp1=temp1^a[i];
        }
    }
    a1=temp1^res;
    b1=a1^res;
    cout<<a1<<" "<<b1<<"\n";

    return 0;
}
