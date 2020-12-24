#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,w,sum1=0,sum2=0,c1=0,c2=0;
    cin>>n;
    while(n--){
        cin>>w;
        if(w==100){
            sum1=sum1+100;
            c1++;
        }
        else{
            sum2=sum2+200;
            c2++;
        }
    }
    if(c1==0){
        if(c2%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(c2==0){
        if(c1%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        if(c1%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
