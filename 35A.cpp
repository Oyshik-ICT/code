#include<bits/stdc++.h>

using namespace std;

int a[4];

int main()
{
    freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n,x,y,i;
  cin>>n;
  a[1]=1;
  a[2]=2;
  a[3]=3;

  for(i=0;i<n;i++){
    cin>>x>>y;
    if(a[1]==y){
        a[1]=x;
    }
    else if(a[1]==x){
        a[1]=y;
    }
    if(a[2]==y){
        a[2]=x;
    }
    else if(a[2]==x){
        a[2]=y;
    }
    if(a[3]==y){
        a[3]=x;
    }
    else if(a[3]==x){
        a[3]=y;
    }
  }

  for(i=1;i<=3;i++){
    if(a[i]==n){
        cout<<i<<"\n";
        break;
    }
  }

  return 0;

}
