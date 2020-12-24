#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        if(a[0]=='2' && a[1]=='0' && a[2]=='2' && a[3]=='0'){
            printf("YES\n");
        }
        else if(a[0]=='2' && a[1]=='0' && a[n-1]=='0' && a[n-2]=='2'){
                printf("YES\n");
        }
         else  if(a[0]=='2'&& a[1]=='0'&& a[2]=='2'&& a[n-1]=='0'){
        printf("YES\n");
    }
        else if(a[0]=='2' && a[n-1]=='0' && a[n-2]=='2' && a[n-3]=='0'){
                printf("YES\n");
        }
        else if(a[n-1]=='0' && a[n-2]=='2' && a[n-3]=='0' && a[n-4]=='2'){
                printf("YES\n");}
            else{
                printf("NO\n");
            }
        }

    return 0;
}
