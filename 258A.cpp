#include<bits/stdc++.h>

using namespace std;

const int N=100000;

int main()
{
    char a[N+1];
    char b[N+1];
    int n,i,j=0,c=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]=='0' && c==0){
            c=1;
            continue;
        }
        b[j]=a[i];
        j++;
    }
    if(c==0){
        for(i=0;i<n-1;i++){
            printf("%c",b[i]);
        }
    }
    else{
        for(i=0;i<j;i++){
            printf("%c",b[i]);
        }
    }
    printf("\n");
    return 0;

}
