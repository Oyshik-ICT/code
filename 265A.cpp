#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[51],t[51];
    int n,i,j=0;
    scanf("%s%s",s,t);
    n=strlen(t);
    for(i=0;i<n;i++){
        if(t[i]==s[j]){
            j++;
        }
    }
    printf("%d\n",j+1);

    return 0;
}
