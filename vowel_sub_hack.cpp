#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[200001];
    int k,j,t,v=0,n,y=0,x;
    gets(a);
    cin>>k;
    n=strlen(a);
    for(j=0;j<k;j++){
        if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o'|| a[j]=='u'){
            v++;
        }
    }
    int m=v;
    t=1;
    while(t+k<=n){
         if(a[t-1]=='a' || a[t-1]=='e' || a[t-1]=='i' || a[t-1]=='o'|| a[t-1]=='u'){
            v--;
         }
          if(a[t+k-1]=='a' || a[t+k-1]=='e' || a[t+k-1]=='i' || a[t+k-1]=='o'|| a[t+k-1]=='u'){
            v++;
          }
          if(v>m){
            m=v;
            y=t;
          }
          t++;
    }
    for(int x=0;x<k;x++){
        cout<<a[y];
        y++;
    }
    cout<<"\n";
    return 0;
}
