#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c,k=1,c1,j=0,n1;
    char a[200],b[200];
    cin>>n;
    n1=2*n;
    char d[n1];
    scanf("%s",d);
    for(i=0;i<n;i++){
        a[j]=d[i];
        j++;
    }
    j=0;
    for(i=n;i<n1;i++){
        b[j]=d[i];
        j++;
    }
    sort(a,a+n);
    sort(b,b+n);
    if(a[0]==b[0] || a[n-1]==b[n-1]){
        printf("NO\n");
        return 0;
    }
    for(i=0;i<n;i++){
               if(a[i]==b[i]){
            k=-1;
            break;
        }
        if(a[i]>b[i]){
            c=1;
        }
        else{
            c=2;
        }
        if(i==0){
            c1=c;
        }
        if(i>0 && c1!=c){
            k=-1;
            break;
        }
    }
    if(k==-1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}
