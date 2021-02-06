#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,sum=0,n,i;
    scanf("%d",&t);
    while(t--){
        char a[100000];
        char b[100000];
        sum=0;
        scanf("%d",&n);
        gets(a);
        scanf("%s",a);
        b[0]='1';
        for(i=0;i<n-1;i++){
                sum=0;
            if(a[i]=='1'){
                sum=sum+1;
            }
            if(b[i]=='1'){
                sum=sum+1;
            }
            if(a[i+1]=='1'){
                sum=sum+1;
            }
            if(sum==3){
                b[i+1]='0';
            }
            if(sum==2){
                b[i+1]='1';
            }
            if(sum==1){
            if(b[i]=='0'){
                b[i+1]='1';
            }
            else{
                b[i+1]='0';
            }
          }
        }
        b[i+1]='\0';
        printf("%s\n",b);
    }

    return 0;
}
