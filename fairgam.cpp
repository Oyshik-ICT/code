#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,sum,t,one,two;
    cin>>t;
    while(t--){
            cin>>n;
    int a[n];
    sum=0;
    one=0;
    two=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            one++;
        }
        else{
            two++;
        }
        sum=sum+a[i];
    }
    if(two==one/2 && one%2==0){
        printf("YES\n");
    }
    else if(one==two && two%2==0){
        printf("YES\n");
    }
    else if(sum%2==0 && (sum/2)%2==0){
        printf("YES\n");
    }
    else if( two>0 && two%2==0 && one==0){
        printf("YES\n");
    }
    else if(one>0 && one%2==0 && two==0){
        printf("YES\n");
    }
    else if(one>0 && two>0 && one%2==0 && two%2!=0){
        printf("YES\n");
    }
    else if(one>0 && two>0 && one%2==0 && two%2==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }

    return 0;
}
