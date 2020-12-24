#include<bits/stdc++.h>

int a1[130];

int b1[130];

using namespace std;

int main()
{
    char a[201],b[201];
    int len1,len2,i,n;
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len1;i++){
            if(a[i]==' '){
                continue;
            }
        n=a[i];
        a1[n]++;
    }
    for(i=0;i<len2;i++){
                if(b[i]==' '){
                continue;
            }
        n=b[i];
        b1[n]++;
    }
    for(i=65;i<=122;i++){
        if(a1[i]<b1[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
