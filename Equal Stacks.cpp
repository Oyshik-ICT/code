#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,n3,sum1=0,sum2=0,sum3=0,d,j=0,k=0,l=0,i;
    cin>>n1>>n2>>n3;
    int a1[n1],a2[n2],a3[n3];
    for(i=0;i<n1;i++){
        cin>>a1[i];
        sum1=sum1+a1[i];
    }
     for(i=0;i<n2;i++){
        cin>>a2[i];
        sum2=sum2+a2[i];
    }
     for(i=0;i<n3;i++){
        cin>>a3[i];
        sum3=sum3+a3[i];
    }
    while(1){
        d=min(min(sum1,sum2),sum3);
    if(d<sum1){
        sum1=sum1-a1[j];
        j++;
    }
    if(d<sum2){
        sum2=sum2-a2[k];
        k++;
    }
    if(d<sum3){
        sum3=sum3-a3[l];
        l++;
    }
    if(sum1==sum2 && sum2==sum3){
        cout<<sum1<<"\n";
        break;
    }
}
    return 0;
}
